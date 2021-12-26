#include "iostream"

using namespace std;
class B
{
    int x = 10;
    public:
      void getdata()
      {
          cout<<"x = "<<x<<endl;
      }
};

class D1 : public B
{
      public:
        D1()
        {
            cout<<"This is D1 constructor"<<endl;
        }
};

class D2 : private B
{
     public:
        void print()
        {
            cout<<"Hello How are you";
        }
};

class x : public D1 , protected D2
{
        public:
        x()
        {
            cout<<"This is x constructor"<<endl;
        }
};
int main()
{
    B a;
    a.getdata();

    D1 d1;
    d1.getdata();

    D2 d2;
    d2.print();

    x x1;
    // Here Ambiguity Arise 
    x1.D1::getdata();

    // x1.D2::getdata();
    return 0;
}