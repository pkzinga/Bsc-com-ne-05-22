/*#include <iostream>
#include “Rectangle.h”
#include “Triangle.h”
using namespace std;

int main() {

 Rectangle rect;
 Triangle trgl;
 rect.SetValues(4,5);
 trgl.SetValues (4,5);

 cout << rect.Area() << '\n';
 cout << trgl.Area() << '\n';

 return 0;
} */
/*
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
 
Rectangle rect;
 Triangle trgl;
 Polygon* pPoly1 = &rect;
 Polygon* pPoly2 = &trgl;
 pPoly1->SetValues(4,5);
 pPoly2->SetValues(4,5);
 pPoly3->SetValues(4,5);
 cout << pPoly1->Area() << '\n';
 cout << pPoly2->Area() << '\n';
 cout << pPoly3->Area() << '\n';
 


 return 0;
}*/
/*
#include <iostream>
#include “Rectangle.h”
#include “Triangle.h”
using namespace std;
int main() {
 
 Rectangle rect;
 Triangle trgl;
 Polygon* pPoly1 = &rect;
 Polygon* pPoly2 = &trgl;
 pPoly1->SetValues(4,5);
 pPoly2->SetValues(4,5);
 cout << rect.Area() << '\n';
 cout << trgl.Area() << '\n';
 return 0;
} */

#include <iostream>
#include “Rectangle.h”
#include “Triangle.h”
using namespace std;
int main() 
{
 Polygon* pPoly1 = new Rectangle(4,5);
 Polygon* pPoly2 = new Triangle(4,5);
 pPoly1->Printarea();
 pPoly2->Printarea();
 delete pPoly1;
 delete pPoly2;
 
return 0;
}