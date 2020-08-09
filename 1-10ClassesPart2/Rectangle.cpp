#include "Rectangle.h"
#include <iostream>
using namespace std;


//Default constructor:
Rectangle::Rectangle(): width(5), length(5){
}


//Custom Constructor:
Rectangle::Rectangle(int w, int l): width(w), length(l){
    clog << "Custom constructor called" << endl;

}

//Writing the setLength function outside of the class:
void Rectangle::setLength(int length){
    this->length = length;
}

//Writing the setWidth function outside of the class:
void Rectangle::setWidth(int width){
    this->width = width;
}
