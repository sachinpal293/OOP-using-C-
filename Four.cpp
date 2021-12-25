#include "iostream"
using namespace std;

class Employee
{
    int id;
    int salary;
    public:
        void setId()
        {
            salary = 150;
            cout<<"Enter the id of employee: ";
            cin>>id;
        }
        void getId()
        {
            cout<<"The id of this employee is "<<id<<endl;
        }
};

int main()
{
    Employee emp1, emp2, emp3;
    
    emp1.setId();
    emp1.getId();

    getvalue(emp3);
    return 0;
}