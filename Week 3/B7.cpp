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
    Ship ship1;
    ship1.ID = "Dummmy1";
    ship1.r.x = 0;
    ship1.r.y = 0;
    ship1.r.w = 10;
    ship1.r.h = 10;
    ship1.dx = 2;
    ship1.dy = 3;
    Ship ship2;
    ship2.ID = "Dummmy2";
    ship2.r.x = 5;
    ship2.r.y = 5;
    ship2.r.w = 15;
    ship2.r.h = 20;
    ship2.dx = 5;
    ship2.dy = 5;
    for (int i = 0; i < 10; i++) {
        ship1.move(); ship2.move();
        display(ship1); display(ship2);
    }
    return 0;
}