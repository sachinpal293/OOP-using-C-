// Copy Constructor
#include "iostream"
using namespace std;

class Number
{
    int x ;
    public:
        Number(){ }
        Number(int a)
        {
            x = a;
        }
        Number (Number &obj){
            cout<<"Copy Constructor is Called !!!"<<endl;
            x= obj.x;
        }
        void display(){
            cout<<"The value of x is "<<x<<endl;
         }

};
int main()
{
    Number a(10),b;
    // a.display();

    Number c(a);
    c.display();

    Number d = c;
    d.display();
    return 0;
}