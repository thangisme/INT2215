#include <iostream>

struct Point {
    int x, y;
};

void print(Point p) {
    std::cout << p.x << " " << p.y << std::endl;
}

void print(Point* p) {
    std::cout << p -> x << " " << p -> y << std::endl;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 15;
    print(point);
    print(&point);
    return 0;
}