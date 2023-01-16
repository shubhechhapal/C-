#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(int x,int y){
a=x;
b=y;
}
void printNumber()
{
cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
}
};
int main()
{
complex c1(4,6);
c1.printNumber();
return 0;
}
