#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int width,height;
        int area;
        static int areaSum;
        static int num;
    public:
        Rectangle(int w=10, int h=10);
        int getArea();
        static int GetNum(){
            return num;
        }
        static int GetAreaSum(){
            return areaSum;
        }
};
int Rectangle::num = 0;
int Rectangle::areaSum = 0;
Rectangle::Rectangle(int w, int h){
    width=w;
    height=h;
    area=width*height;
    areaSum+=area;
    num++;
}
int Rectangle::getArea(){
    return area;
}

int main()
{
    Rectangle R1(10,5);
    Rectangle R2;
    cout << "Sum: " << Rectangle::GetNum() << endl;
    cout << "AreaSum: " << Rectangle::GetAreaSum() << endl;
    return 0;
}
