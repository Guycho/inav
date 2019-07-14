/*
 * This file is part of INAV.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 *
 * @author Alberto Garcia Hierro <alberto@garciahierro.com>
 */

#include "drivers/display_canvas.h"

void displayCanvasSetStrokeColor(displayCanvas_t *displayCanvas, displayCanvasColor_e color)
{
    if (displayCanvas->vTable->setStrokeColor) {
        displayCanvas->vTable->setStrokeColor(displayCanvas, color);
    }
}

void displayCanvasSetFillColor(displayCanvas_t *displayCanvas, displayCanvasColor_e color)
{
    if (displayCanvas->vTable->setFillColor) {
        displayCanvas->vTable->setFillColor(displayCanvas, color);
    }

}

void displayCanvasSetColorInversion(displayCanvas_t *displayCanvas, bool inverted)
{
    if (displayCanvas->vTable->setColorInversion) {
        displayCanvas->vTable->setColorInversion(displayCanvas, inverted);
    }
}

void displayCanvasSetPixel(displayCanvas_t *displayCanvas, int x, int y, displayCanvasColor_e color)
{
    if (displayCanvas->vTable->setPixel) {
        displayCanvas->vTable->setPixel(displayCanvas, x, y, color);
    }
}

void displayCanvasSetPixelToStrokeColor(displayCanvas_t *displayCanvas, int x, int y)
{
    if (displayCanvas->vTable->setPixelToStrokeColor) {
        displayCanvas->vTable->setPixelToStrokeColor(displayCanvas, x, y);
    }
}

void displayCanvasSetPixelToFillColor(displayCanvas_t *displayCanvas, int x, int y)
{
    if (displayCanvas->vTable->setPixelToFillColor) {
        displayCanvas->vTable->setPixelToFillColor(displayCanvas, x, y);
    }
}

void displayCanvasClearRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->clearRect) {
        displayCanvas->vTable->clearRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasResetDrawingContext(displayCanvas_t *displayCanvas)
{
    if (displayCanvas->vTable->resetDrawingContext) {
        displayCanvas->vTable->resetDrawingContext(displayCanvas);
    }
}

void displayCanvasDrawCharacter(displayCanvas_t *displayCanvas, int x, int y, uint16_t chr, uint8_t opts)
{
    if (displayCanvas->vTable->drawCharacter) {
        displayCanvas->vTable->drawCharacter(displayCanvas, x, y, chr, opts);
    }
}
void displayCanvasMoveToPoint(displayCanvas_t *displayCanvas, int x, int y)
{
    if (displayCanvas->vTable->moveToPoint) {
        displayCanvas->vTable->moveToPoint(displayCanvas, x, y);
    }
}

void displayCanvasStrokeLineToPoint(displayCanvas_t *displayCanvas, int x, int y)
{
    if (displayCanvas->vTable->strokeLineToPoint) {
        displayCanvas->vTable->strokeLineToPoint(displayCanvas, x, y);
    }
}

void displayCanvasStrokeTriangle(displayCanvas_t *displayCanvas, int x1, int y1, int x2, int y2, int x3, int y3)
{
    if (displayCanvas->vTable->strokeTriangle) {
        displayCanvas->vTable->strokeTriangle(displayCanvas, x1, y1, x2, y2, x3, y3);
    }
}

void displayCanvasFillTriangle(displayCanvas_t *displayCanvas, int x1, int y1, int x2, int y2, int x3, int y3)
{
    if (displayCanvas->vTable->fillTriangle) {
        displayCanvas->vTable->fillTriangle(displayCanvas, x1, y1, x2, y2, x3, y3);
    }
}

void displayCanvasFillStrokeTriangle(displayCanvas_t *displayCanvas, int x1, int y1, int x2, int y2, int x3, int y3)
{
    if (displayCanvas->vTable->fillStrokeTriangle) {
        displayCanvas->vTable->fillStrokeTriangle(displayCanvas, x1, y1, x2, y2, x3, y3);
    }
}

void displayCanvasStrokeRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->strokeRect) {
        displayCanvas->vTable->strokeRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasFillRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->fillRect) {
        displayCanvas->vTable->fillRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasFillStrokeRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->fillStrokeRect) {
        displayCanvas->vTable->fillStrokeRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasStrokeEllipseInRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->strokeEllipseInRect) {
        displayCanvas->vTable->strokeEllipseInRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasFillEllipseInRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->fillEllipseInRect) {
        displayCanvas->vTable->fillEllipseInRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasFillStrokeEllipseInRect(displayCanvas_t *displayCanvas, int x, int y, int w, int h)
{
    if (displayCanvas->vTable->fillStrokeEllipseInRect) {
        displayCanvas->vTable->fillStrokeEllipseInRect(displayCanvas, x, y, w, h);
    }
}

void displayCanvasCtmReset(displayCanvas_t *displayCanvas)
{
    if (displayCanvas->vTable->ctmReset) {
        displayCanvas->vTable->ctmReset(displayCanvas);
    }
}

void displayCanvasCtmSet(displayCanvas_t *displayCanvas, float m11, float m12, float m21, float m22, float m31, float m32)
{
    if (displayCanvas->vTable->ctmSet) {
        displayCanvas->vTable->ctmSet(displayCanvas, m11, m12, m21, m22, m31, m32);
    }
}

void displayCanvasCtmTranslate(displayCanvas_t *displayCanvas, float tx, float ty)
{
    if (displayCanvas->vTable->ctmTranslate) {
        displayCanvas->vTable->ctmTranslate(displayCanvas, tx, ty);
    }
}

void displayCanvasCtmScale(displayCanvas_t *displayCanvas, float sx, float sy)
{
    if (displayCanvas->vTable->ctmScale) {
        displayCanvas->vTable->ctmScale(displayCanvas, sx, sy);
    }
}

void displayCanvasCtmRotate(displayCanvas_t *displayCanvas, float r)
{
    if (displayCanvas->vTable->ctmRotate) {
        displayCanvas->vTable->ctmRotate(displayCanvas, r);
    }
}

void displayCanvasContextPush(displayCanvas_t *displayCanvas)
{
    if (displayCanvas->vTable->contextPush) {
        displayCanvas->vTable->contextPush(displayCanvas);
    }
}

void displayCanvasContextPop(displayCanvas_t *displayCanvas)
{
    if (displayCanvas->vTable->contextPop) {
        displayCanvas->vTable->contextPop(displayCanvas);
    }
}
