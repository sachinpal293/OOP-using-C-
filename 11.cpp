// Inheritance  Multilevle inhertance
#include "iostream"
using namespace std;

class student 
{
    protected:
        int roll_no;
    public:
        void get_data(int);
        void put_data();
};

void student::get_data(int a)
{
    roll_no = a;
}

void student::put_data()
{
    cout<<"Roll number : "<<roll_no<<endl;
}
class test : public student
{
    protected :
        float sub1;
        float sub2;
    public :
        void get_marks(float, float);
        void put_marks(void);
};
void test::get_marks(float a, float b){

    sub1 = a;
    sub2 = b;
}
void test :: put_marks(void)
{
    cout<<"Marks in subject1 = "<<sub1<<endl;
    cout<<"Marks in subject2 = "<<sub2<<endl;
}
class result : public test
{
    float total;
    public :
        void display(void);
};
void result :: display(void)
{
    total = sub1 + sub2;
    put_data();
    put_marks();
    cout<<"Total = "<<total<<endl;


}
int main()
{
    result student1;
    student1.get_data(111);
    student1.get_marks(75.0,59.5);

    student1.display();
    return 0;
}