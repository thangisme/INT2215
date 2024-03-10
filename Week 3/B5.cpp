#include <iostream>

struct Point {
    int x, y;
};

struct Rect {
    int x, y, w, h;
    bool contains(const Point p) {
        return (p.x >= x && p.x <= x + w) && (p.y >= y && p.y <= y + h);
    }
};

int main() {
    Rect a;
    a.x = 0;
    a.y = 0;
    a.w = 10;
    a.h = 10;
    Point p;
    p.x = 3;
    p.y = 4;
    std::cout << a.contains(p) << std::endl;
    return 0;
}