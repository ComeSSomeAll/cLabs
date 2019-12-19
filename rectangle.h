#ifndef RECT_H
#define RECT_H

struct Rectangle
{
    float x1, y1;
    float x2, y2;
};

float rectPerimeter(struct Rectangle Rect);
float rectArea(struct Rectangle Rect);
#endif