//
// Created by rarce on 02/08/20.
//

#include "Rectangle.h"
#include <cmath>

Rec::Rec() {
    x0 = 0;
    y0 = 0;
    x1 = 0;
    y1 = 0;
}

Rec::Rec(int xx0, int yy0, int xx1, int yy1) {
    x0 = xx0;
    y0 = yy0;
    x1 = xx1;
    y1 = yy1;
}

int Rec::area() {
    return (x1 - x0)*(y1 - y0);
}

int Rec::perimeter() {
    return (2 * (x1 -x0) + 2 * (y1 - y0));
}

bool Rec::operator<(Rec &r) {
    return sqrt(pow(x1 + y1, 2))/2 < sqrt(pow(r.x1 + r.y1, 2))/2;
}

Rec Rec::operator+(Rec &r) {
    if(x1 > r.x1)
        return Rec(x0,y0,r.x1,r.y1);
    else
        return Rec(x0,r.y0,r.x1,y1);
}

void Rec::scale(int factor) {

}

void Rec::display() {

}
