#pragma once
#include "Polygon.h"

void Polygon::SetValues(int width, int height)
{
 mWidth = width;
 mHeight = height;
}

/*int Polygon::Area()
{
 return 0;
}*/
void Polygon::PrintArea()
{
 cout << this->area() << '\n';
}
