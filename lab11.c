#include "stdio.h"
#include "rectangle.h"

float rectPerimeter(struct Rectangle Rect)
{
    float Perimeter = 2 * ((Rect.x2 - Rect.x1) + (Rect.y2 - Rect.y1));
    return Perimeter;
}

float rectArea(struct Rectangle Rect)
{
    float Area = (Rect.x2 - Rect.x1) * (Rect.y2 - Rect.y1);
    return Area;
}

int main()
{
    struct Rectangle Rect;
    scanf("%f %f", &Rect.x1, &Rect.y1);
    scanf("%f %f", &Rect.x2, &Rect.y2);
    printf("Perimeter of ur rectangle: %f\n", rectPerimeter(rect));
    printf("Area of ur rectangle: %f\n", rectArea(rect));
    return 0;
}