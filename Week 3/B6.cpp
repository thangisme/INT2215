#include <iostream>
#include <string>

struct Rect {
    int x, y, w, h;
};

struct Ship {
    std::string ID;
    Rect r;
    int dx, dy;
    void move() {
        r.x += dx;
        r.y += dy;
    }
};

void display(const Ship& ship) {
    std::cout << ship.ID << " " << ship.r.x << " " << ship.r.y << std::endl;
}

int main() {
    Ship ship;
    ship.ID = "Dummmy";
    ship.r.x = 0;
    ship.r.y = 0;
    ship.r.w = 10;
    ship.r.h = 10;
    ship.dx = 2;
    ship.dy = 3;
    ship.move();
    display(ship);
    return 0;
}