// Destructor 
/*
Definition -> A destructor , as the name implies, is used to deploy the object taht have been
created  by a constructor. Like a constructor, the destructor is a member function whose name eis the same as rye class name but is preceded
ny a tilde. fo exmaple , the destructor for the class integer can be defined as shown below.

1.  A destructor never takews any argument noe does it return any value. it will be invoked implicitly 
by the compiler upon exit from the program (or block or function as theh case may be) to clean up stroage 
that is no longer accessible . it is a ggo practice to declare destructors in a program since it release memory space for future use. 
*/
#include "iostream"
using namespace std;
int count = 0;
class number {
    public:
        number(){
            count++;
            cout<<"\n No. of object creted "<<count<<endl;
        }
        ~number(){
            cout<<"\n No. of object destroyed "<<count<<endl;
            count--;
        }
};
int main()
{
    cout<<"\n\nEnter Main\n";
    number n1,n2,n3;
    number n6;
    return 0;
}