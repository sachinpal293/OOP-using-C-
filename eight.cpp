/*
class object can be initialized dynamically too. That is to say , the inital value of an objetc may be provided durning runtime
one advantage of dynamic initialization is that we can provide various initialization formats, using overload 
constructors. this provides the flexibility of using diferent formate of data at run time depending upon the situation

*/
// Now Write a Program to Long time Fixed Deposite System
#include "iostream"
using namespace std;
class Fixed_Deposite_System
{
    long int Amount;
    int year;
    float rate;
    float Return_value;
    public: 
        Fixed_Deposite_System(){}
        Fixed_Deposite_System(long int p, int y , float r = 0.12);
        Fixed_Deposite_System(long int p, int y, int r);
        void display();
};
Fixed_Deposite_System::Fixed_Deposite_System(long int p, int y,float r )
{
     Amount = p;
     year = y;
     rate = r;
     Return_value = Amount;
     for(int i = 1; i <=y;i++){
         Return_value = Return_value * (1.0 + r);
     }

}
Fixed_Deposite_System::Fixed_Deposite_System(long int p, int y,int r)
{
     Amount = p;
     year = y;
     rate = r;
     Return_value = Amount;
     for(int i = 1; i <=y;i++){
         Return_value = Return_value * (1.0 + float(r)/100);
     }

}
void Fixed_Deposite_System :: display()
{
    cout<<"\n"
        <<"Principal Amount = "<<Amount<<"\n"
        <<"Return Value = "<<Return_value<<"\n";
}

int main()
{
    Fixed_Deposite_System Fd1, Fd2, Fd3;
    long int Money;
    int saal, Byaj;
    float Byaj1;

    cout<<"Enter  amount , period, Interset rate (deciaml Form)"<<endl;
    cin>>Money>>saal>>Byaj1;
    Fd1 = Fixed_Deposite_System(Money,saal,Byaj1);

    cout<<"Enter  amount , period, Interset rate (Percent Form)"<<endl;
    cin>>Money>>saal>>Byaj;
    Fd2 = Fixed_Deposite_System(Money,saal,Byaj);

    
    cout<<"Enter  amount , period"<<endl;
    cin>>Money>>saal;
    Fd3 = Fixed_Deposite_System(Money,saal);

    cout<<"Deposite 1\n";
    Fd1.display();

    cout<<"Deposite 2\n";
    Fd2.display();

    cout<<"Deposite 3\n";
    Fd3.display();
    return 0;
}