// A Function Friendly with Two Classes
//----------------------------------------------------------------
// Program name : Swapping private Data of Classes

#include "iostream"
using namespace std;

class class_2;
class class_1{
    int value1;
    public:
        void input_data(int a)
        {
            value1 = a;
        }
        void display_data()
        {
            cout<<"The Value of Class_1 data "<<value1<<endl;
        }
        friend void exchange_data(class_1 &, class_2 &);
};

class class_2
{
    int value2;
    public:
        void input_data(int a)
        {
            value2 = a;
        }
        void display_data()
        {
            cout<<"The Value of Class_2 data "<<value2<<endl;
        }
        friend void exchange_data(class_1 &, class_2 &);
};
void exchange_data(class_1 & x, class_2 & y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    class_1 c1;
    class_2 c2;

    c1.input_data(150);
    c2.input_data(499);

    c1.display_data();
    c2.display_data();

    exchange_data(c1, c2);

    cout<<endl;
    c1.display_data();
    c2.display_data();

    cout<<endl;
    c1.display_data();
    c2.display_data();

    exchange_data(c1, c2);

    cout<<endl;
    c1.display_data();
    c2.display_data();
      
}
