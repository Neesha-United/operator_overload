#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
Point P1(1,2);
Point P2(4,5);
Point P3=P1+P2;
Point P4=P1.operator+(P2);
P3.print();
P4.print();
Point P5=P1+P2+P3+P4;
P5.print();

}
