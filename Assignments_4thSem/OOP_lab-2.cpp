#include<iostream>
using namespace std;

class Marks
{
    int maths = 98;
    int science = 89;
    int english = 86;
    int hindi = 99;
    int computer = 94;
    int Std = 9;
    public:
        Marks()
        {
            cout<<"Class : "<<Std<<"\n";
            cout<<"Marks obtained: \n";
            cout<<"Mathematics : "<<maths<<endl;
            cout<<"Science : "<<science<<endl;
            cout<<"English : "<<english<<endl;
            cout<<"Hindi : "<<hindi<<endl;
            cout<<"Computer : "<<computer<<endl;
        }
};


class area
{
    double length, breadth, radius;
    const double pi = 3.14;
    public:
        area(double l, double b)
        {
            length = l;
            breadth = b;
            cout<<"Area of rectangle is :"<<length * breadth<<endl;
        }
        area(double r)
        {
            radius = r;
            cout<<"Area of circle is : "<<pi * radius * radius<<endl;
        }
};

class numbers
{
    int x;
    public:
        numbers(int x1)
        {
            x = x1;
        }
        numbers(const numbers &num2)
        {
            x = num2.x;
        }
        int getX()
        {
            return x;
        }
};



class track
{
    public:
        static int cnt;
        track()
        {
            cout<<"Object "<<cnt<<" is created....\n";
            cout<<"Total active objects : "<<cnt<<endl<<endl;
            cnt ++;
        }
        ~track()
        {
            cnt--;
            cout<<"Object "<<cnt<<" is destroyed !\n";
            cout<<"Total active objects : "<<cnt - 1<<endl<<endl;
        }
};

int track::cnt=1;
int main()
{
    Marks mark;
    area rect(48, 35.89), circ(5.8);
    cout<<endl;
    numbers num1(874), num2(645), num3(297);
    numbers num4 = num1;
    cout<<"1.x is "<<num1.getX()<<endl;
    cout<<"4.x is "<<num4.getX()<<endl;
    num4 = num2;
    cout<<"2.x is "<<num2.getX()<<endl;
    cout<<"4.x is "<<num4.getX()<<endl;
    num4 = num3;
    cout<<"3.x is "<<num3.getX()<<endl;
    cout<<"4.x is "<<num4.getX()<<endl;
    track o1, o2, o3, o4;
    return 0;
}
