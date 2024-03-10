#include <iostream>

struct Point {
    int x, y;
};

void print(Point p) {
    std::cout << p.x << " " << p.y << std::endl;
}

Point mid_point(const Point p1, const Point p2) {
    Point midPoint;
    midPoint.x = (p1.x + p2.x) / 2;
    midPoint.y = (p1.y + p2.y) / 2;
    return midPoint;
}

int main() {
    Point point1;
    point1.x = 10;
    point1.y = 15;
    Point point2;
    point2.x = 15;
    point2.y = 10;
    Point midPoint = mid_point(point1, point2);
    print(midPoint);
    return 0;
}