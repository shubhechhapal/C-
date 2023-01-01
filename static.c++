#include<iostream>
using namespace std;
class Employee
{
    int id;
    int count;
public:
    void setData(void)
    {
        cin>>id;
    }
    void getData(void)
    {
        cout<<id;
    }
};
int main()
{
    Employee harry;
    harry.id();
    return 0;
}
