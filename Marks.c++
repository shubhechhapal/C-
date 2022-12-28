#include<iostream>
using namespace std;
int main(){
int marks[]={23,45,56,89};
int mathMarks [4];
mathMarks [0]=2278;
mathMarks [1]=738;
mathMarks [2]=378;
mathMarks [3]=578;
cout<<"These are math Marks "<<endl;
cout<<mathMarks [0]<<endl;
cout<<mathMarks [1]<<endl;
cout<<mathMarks [2]<<endl;
cout<<mathMarks [3]<<endl;
marks[2]=455;
cout<<"These are marks"<<endl;
for(int i=1;i<=4;i++)
{
cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
}
return 0;
}
