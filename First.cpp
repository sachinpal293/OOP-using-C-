#include "iostream"
using namespace std;
// Basics of Object Oriented Programming & Access modifiers
class Employee
{
    private:
        int a = 0,b = 0,c = 0;
    public:
        int d = 40, e=50;
        // Function Declaration
        void setData(int x, int y , int z);
        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
            cout<<"The Value of C is "<<c<<endl;
            cout<<"The Value of D is "<<d<<endl;
            cout<<"The Value of e is "<<e<<endl;
        }
};
void Employee :: setData(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
int main()
{
    Employee sachin;
    sachin.setData(10,20,30);
    sachin.getData();
    return 0;
}