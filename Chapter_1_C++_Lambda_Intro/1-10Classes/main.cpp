#include <iostream>

using namespace std;

class Rectangle{
public:

    //Constructor prototypes:
    Rectangle();
    Rectangle(int width, int length);

    void setWidth(int width){
        this->width = width;
    }

    void setLength(int length);

    int getArea(){
        return width * length;
    }

private:
    int width, length;
};

//Default constructor:
Rectangle::Rectangle(): width(5), length(5){
}


//Custom Constructor:
Rectangle::Rectangle(int w, int l): width(w), length(l){
    clog << "Custom constructor called" << endl;

}


//Writing the function outside of the class:
void Rectangle::setLength(int length){
    this->length = length;
}


class Para
{
public:
    Para(int w, int l, int h) : r(w, l), height(h){
        cout << "Para constructor called";
    }

    int getVolume(){
        return r.getArea() * height;
    }


private:
    Rectangle r;
    int height;
};

int main()
{
    Rectangle r;
    Rectangle r1(20, 20);
    Para p(30, 30, 30);
    cout << "The area of the rectangle is: " << r1.getArea() << endl;
    cout << "The volume of our shape is: " << p.getVolume() << endl;
    return 0;
}
