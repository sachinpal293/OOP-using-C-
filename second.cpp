// Nesting of Member Functions in c++
#include "iostream"
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);
    public:
        void read(void);
        void ones(void);
        void display(void);
};

void binary::read(void)
{
    cout<<"Enter a binary number:";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
void binary :: ones(void)
{
    chk_bin();
    for(int i =0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else 
        {
            s.at(i)='0';
        }
    }
}
void binary :: display(void){
    cout<<"Displaying binary..."<<endl;
    for(int i=0; i< s.length(); i++){
        cout<<s.at(i)<<endl;
    }
}
int main()
{
    // OOPs - CLasses and Objects

    // C++ --> initially called --> C With classes by Stroustrups
    // Class --> Extension of structure (in c)
    // structure had limitations
            // - members are public
            // - No methods
    // Classes --> structure  + more
    // classes --> can have methods and properties
    // Classes --> can make few memberss as private & few as public members
    // you can declare objects along with the class declartaion

    // employee.salary --> it makes no sense if salary is private .


    // Nesting of Member Functions
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}