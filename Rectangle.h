//
// Created by rarce on 02/08/20.
//

#ifndef RECTANGLES_RECTANGLE_H
#define RECTANGLES_RECTANGLE_H


class Rec {
    private:
        int x0, y0; // coordinates of the lower left corner
        int x1, y1; // coordinates of the top right corner
    public:
        Rec();
        Rec(int xx0, int yy0, int xx1, int yy1);
        int area();
        int perimeter();
        bool operator<(Rec &r);
        Rec operator+(Rec &r);
        void scale(int factor);
        void display();
};


#endif //RECTANGLES_RECTANGLE_H
