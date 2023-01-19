#include<iostream>
using namespace std;
class Base
{
    int data1;
public:
    int data2;
    void setdata();
    int getData1();
    int getdata2();
};
void Base::setData(void)
{
    data1=10;
    data2=20;
}
int Base::getData1()
{
    return data1;
}
class Derived:public Base
{
    int data2;
}
class Derived:publiBase
{
    int data3;
public:
    void process();
    void display();
};
void Derived::process()
{
    data3=data2*getdata1();
}
void Derived::display()
{
    cout<<"value of data 1 is "<<getData1()<<endl;
    cout<<"value of data 2 is "<<data2<<endl;
    cout<<"value of data 3 is "<<data3<<endl;
}
intmain()
{
    Derived der;
    dr.setData();
    der.process();
    der.disp;
    ay();
    return 0;
}
