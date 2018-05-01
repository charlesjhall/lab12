//
// Created by cjh1123 on 5/1/2018.
//

#ifndef UNTITLED_BOX_H
#define UNTITLED_BOX_H


class Box {
public:
    Box(double len = 1, double w = 1, double h = 1);
    double getVolume() const;
    bool operator<(const Box& rhs) const;
    bool operator==(const Box& rhs) const;
    bool operator>(const Box& rhs) const;
    Box operator+(const Box& rhs) const;
private:
    double length;
    double width;
    double height;
};


#endif //UNTITLED_BOX_H