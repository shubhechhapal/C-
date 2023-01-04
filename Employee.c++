#include<iostream>
using namespace std;
class Employee{
int Id;
static int count;
public:
void setData(void){
cout<<"Enter the Id"<<endl;
cin>>Id;
count++;
}
void getData(void){
cout<<"The Id of this employee is "<<Id<<" and this is employee number "<<endl;
}
};
int Employee::count;
int main(){
Employee harry, rohan, lovish;
harry.setData();
harry.getData();
rohan.setData();
rohan.getData();
lovish.setData();
lovish.getData();
return 0;
}
