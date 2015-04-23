#include <iostream>
#include "Point.h"
using namespace std;
Point::Point()
{
    setX(0);
    setY(0);
}

Point::    Point(int x_point, int y_point)
    {
        setX(x_point);
        setY(y_point);
    }
    void Point::setX(int x_point)
    {
        x=x_point;

    }
    int Point::getX(){
    return x;
    }
    void Point::setY(int y_point)

    {
    y=y_point;
    }
    int Point::getY()
    {
        return y;
    }
    void Point::setXY(int x_point, int y_point)
    {
        setX(x_point);
        setY(y_point);
    }
    void Point::print()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    Point Point:: operator+(Point P)const//P=P2//return type=point and P2 is passed which is also of type Point
    {
        Point py;//for returning Point object
        py.setX(x+P.getX());//adds x from P1 and P.getX represents X from P@
        py.setY(y+P.getY());//similar as x
        return py;//returns added x and y
    }




