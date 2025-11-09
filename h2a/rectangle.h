#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;


public:
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();

    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);

    void getArea();
    //getCircum();
    void muuttujat();
    void getCircum();
};

#endif // RECTANGLE_H
