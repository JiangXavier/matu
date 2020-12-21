/*完成Location类（C++）
通过课程进入	题 号:	164	完成Location类（C++）	语言要求：	C++
引入头文件Location.h，它的内容如下：
#include <iostream>
using namespace std;
class Location{
public:
	Location(int xx,int yy){
		x =xx;
		y =yy;
	}
Location &operator +(Location &offset);
Location &operator -(Location &offset);

int getX(){return x;}
int getY(){return y;}
private:
	int x;
	int y;
};

完成运算符 +和 - 的重载，
+运算符的重载实现两个Location对象 的对应坐标相加，例如：
Location L1(1,1),L2(2,2);
L1 =L1+L2//L1为（3,3）

-运算符的重载实现两个Location对象的对应坐标相减，例如：
Location L1(1,1),L2(2,2);
L1 =L1-L2//L1为（-1,-1）*/

#include <iostream>
using namespace std;
class Location{
public:
    Location(int xx,int yy){
        x =xx;
        y =yy;
    }
    Location &operator +(Location &offset);
    Location &operator -(Location &offset);

    int getX(){return x;}
    int getY(){return y;}
private:
    int x;
    int y;
};
Location & Location::operator +(Location &s){

    this->x=s.x+ this->x;
    this->y=s.y+this->y;

    return *this;
}
Location & Location::operator -(Location &s){

    this->x=this->x-s.x;
    this->y=this->y-s.y;

    return *this;
}