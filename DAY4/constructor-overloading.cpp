#include<iostream>
using namespace std;
class Area{
    private:
    int length,breadth,height;
    float radius;
    public:
    int result;
    Area(){  // default constructor ( no parameter)
        length=0;
        breadth=0;
        radius=0;
        result = 0;
        cout <<" Area: "<< result<< endl;
    }
    Area(int a){  //parametrized constructor(1 parameter - integer)
    length = a;
    result = length * length;
    cout << "Area of Square is " << result << endl;
    }
    Area(int a, int d){   //parametrized constructor(2 parameter)
        length = a;
        breadth = d;
        result = length * breadth;
         cout << "Area of Rectangle is " << result << endl;
    }
    Area(float r){  //parametrized constructor(1 parameter - float)
        radius = r;
        result = 2 * 3.14 * radius;
         cout << "Area of Circle is " << result << endl;
    }
    Area(int l, int b, int h){   //parametrized constructor(3 parameter)
        length = l;
        breadth = b;
        height = h;
        result = length * breadth * height;
        cout << "Area of Cube is " << result << endl;
    }
};
int main(){
    Area a1;
    int len,wid,hgt;
    float rad;
    cout << "Enter the length of Square: ";
    cin >> len;
    Area a2(len);  // finding area of square( 1 parameter- integer)
    cout << "Enter the length and breadth of Rectangle: ";
    cin >> len >> wid;
    Area a3(len,wid);  // finding area of rectangle(2 parameter)
    cout << "Enter the radius of Circle: ";
    cin >> rad; 
    Area a4(rad);   // finding area of circle(1 parameter- float)
    cout << "Enter the length, breadth and height of Cube: ";
    cin >> len >> wid >> hgt;
    Area a5(len,wid,hgt);  // finding area of cube(3 parameter)
    
}
