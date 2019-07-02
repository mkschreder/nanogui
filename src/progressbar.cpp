/*
    src/progressbar.cpp -- Standard widget for visualizing progress

    NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
    The widget drawing code is based on the NanoVG demo application
    by Mikko Mononen.

    All rights reserved. Use of this source code is governed by a
    BSD-style license that can be found in the LICENSE.txt file.
*/

#include <nanogui/progressbar.h>
#include <nanogui/opengl.h>
#include <nanogui/serializer/core.h>

NAMESPACE_BEGIN(nanogui)

ProgressBar::ProgressBar(Widget *parent)
    : Widget(parent), mValue(0.0f) {}

Vector2i ProgressBar::preferredSize(NVGcontext *) const {
    return Vector2i(70, 12);
}

void ProgressBar::draw(NVGcontext* ctx) {
    Widget::draw(ctx);

    NVGpaint paint = nvgBoxGradient(
        ctx, mPos.x() + 1, mPos.y() + 1,
        mSize.x()-2, mSize.y(), 3, 4, mTheme->mBorderDark, Color(0, 92));
    nvgBeginPath(ctx);
    nvgRoundedRect(ctx, mPos.x(), mPos.y(), mSize.x(), mSize.y(), 3);
    nvgFillPaint(ctx, paint);
    nvgFill(ctx);

    float value = std::min(std::max(0.0f, mValue), 1.0f);
    int barPos = (int) std::round((mSize.x() - 2) * value);

    paint = nvgBoxGradient(
        ctx, mPos.x(), mPos.y(),
        barPos+1.5f, mSize.y()-1, 3, 4,
        mTheme->mBorderMedium, Color(128, 100));

    nvgBeginPath(ctx);
    nvgRoundedRect(
        ctx, mPos.x()+1, mPos.y()+1,
        barPos, mSize.y()-2, 3);
    nvgFillPaint(ctx, paint);
    nvgFill(ctx);

	nvgFillColor(ctx, mEnabled ? mTheme->mTextColor : mTheme->mDisabledTextColor);
	nvgFontSize(ctx, mTheme->mStandardFontSize);
    nvgFontFace(ctx, "sans-bold");

    nvgTextAlign(ctx, NVG_ALIGN_MIDDLE);
	float w = nvgTextBounds(ctx, 0, 0, mCaption.c_str(), nullptr, nullptr);
	float off = (mSize.x() - w) / 2;
	if(off < 0) off = 0;
	nvgText(ctx, mPos.x() + off, mPos.y() + mSize.y() / 2,
                mCaption.c_str(), nullptr);

}

void ProgressBar::save(Serializer &s) const {
    Widget::save(s);
    s.set("value", mValue);
}

bool ProgressBar::load(Serializer &s) {
    if (!Widget::load(s))
        return false;
    if (!s.get("value", mValue))
        return false;
    return true;
}

NAMESPACE_END(nanogui)
