#include <iostream>
using namespace std;
class Point{
private:
    int x;
    int y;
public:
    Point();
    Point(int x_point, int y_point);
    void setX(int x_point);
    int getX();
    void setY(int y_point);
    int getY();
    void setXY(int x_point, int y_point);
    void print();
     Point operator+(Point P)const;

};

