// Distance b/w two given points on a plane.

#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x, y;
    friend void dis_2_points(Point, Point);

public:
    Point(int, int);
    void display();
};

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

void dis_2_points(Point a, Point b)
{
    cout << sqrt(pow((b.x) - (a.x), 2) + pow((b.y) - (a.y), 2)) << " units" << endl;
}

void Point::display()
{
    cout << "(" << x << ","
         << " " << y << ")" << endl;
}

int main()
{
    Point p1(0, 1), p2(0, 6);

    cout << "Point : ";
    p1.display();
    cout << "Point : ";
    p2.display();

    cout << "Distance b/w these 2 points is : ";
    dis_2_points(p1, p2);
}