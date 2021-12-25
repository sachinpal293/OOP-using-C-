// Static Members & Methods 
#include <iostream>
using namespace std;

class Employee 
{
    int id;
    static int count;
    public:
        void setdata(void)
        {
            cout<<"Enter the Id"<<endl;
            cin>>id;
        }
        void getdata(void)
        {
            cout<<"The Id of This Employee is "<<id<<endl;
            count++;
            cout<<"Employee no ."<<count<<endl;
        }
        static void getcount(void)
        {
            cout<<"The value of count is "<<count<<endl;
        }
};
int Employee :: count = 1100;
int main()
{
    Employee emp1, emp2, emp3;
    emp1.setdata();
    emp1.getdata();
    Employee::getcount();

    emp2.setdata();
    emp2.getdata();
    Employee::getcount();

    emp3.setdata();
    emp3.getdata();
    Employee::getcount();
  return 0;
}