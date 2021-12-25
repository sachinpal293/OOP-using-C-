// Object as a Function argument ,return  and friend function example 
#include "iostream"

using namespace std;
class add{
      int a;
      int b;
      public:
        void getdata(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void putdata()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
        friend add sum(add, add);
        friend int sum(add);
};

// This is an example of freind function & how function take object as an argument
int sum(add n1)
{
    return  n1.a + n1.b;
    
}

// This is a class type methode &  it return a object
add sum(add n1, add n2)
{
     add third;
     third.a = n1.a + n2.a;
     third.b = n1.b + n2.b;

     return third;
}
int main()
{
    add one, two , three;
    one.getdata(1,2);
    one.putdata();
    two.getdata(4,8);
    two.putdata();
    cout<<"The value is "<<sum(one)<<endl;
    cout<<"The value is "<<sum(two)<<endl;


    three = sum(one, two);
    three.putdata();
    return 0;
}