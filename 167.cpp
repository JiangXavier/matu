/*抽象类Shape(C++)
通过课程进入	题 号:	167	抽象类Shape(C++)	语言要求：	C++
引入头文件Shape.h,它的内容如下：
#include <iostream>
using namespace std;
class Shape{
public:
	Shape(){}
	~Shape(){}
	virtual double GetArea()=0;
	virtual double GetPerimeter()=0;
	static Shape* createRectangle(double length,double width);
	static Shape* createCircle(double radius);
};

由Shape类派生出Rectangle类和Circle类,Rectangle类有长宽属性，Circle类有半径属性

实现派生类Rectangle和Circle的GetArea()和GetPerimeter()函数，

Rectangle类的GetArea返回长方形的面积，GetPerimeter返回长方形的周长
Circle类的GetArea返回圆形的面积，GetPerimeter返回圆形的周长。

Rectangle类有构造函数Rectangle(double l,double w)
Circle类有构造函数Circle(double r)

在你的代码中除了实现这两个类还需加入createRectangle和createCircle的实现，
它们的实现必须在Rectangle类和Circle类的定义之后，实现如下：
Shape * Shape::createRectangle(double l,double w){return new Rectangle(l,w);}
Shape * Shape::createCircle(double r){return new Circle(r);}*/
#include <iostream>
using namespace std;
class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual double GetArea()=0;
    virtual double GetPerimeter()=0;
    static Shape* createRectangle(double length,double width);
    static Shape* createCircle(double radius);
};
class Rectangle: public Shape{
public:
    Rectangle(double l,double w){
        lenth=l;
        width=w;
    }
    double GetArea(){
        return width*lenth;
    }
    double GetPerimeter(){
        return 2*(width+lenth);
    }
    double width;
    double lenth;
};
class Circle: public Shape{
public:
    Circle(double r){
        radius=r;
    }
    double GetArea(){
        return 3.14*radius*radius;
    }
    double GetPerimeter(){
        return 2*3.14*radius;
    }
    double radius;
};
Shape * Shape::createRectangle(double l,double w){return new Rectangle(l,w);}
Shape * Shape::createCircle(double r){return new Circle(r);}