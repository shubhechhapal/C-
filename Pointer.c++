#include<iostream>
using namespace std;
int main(){
int a=3;
int *b;
b=&a;
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<b<<endl;
cout<<"The value at address b is "<<*b<<endl;
return 0;
}
