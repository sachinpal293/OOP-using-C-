// Constructor and Deconstructor
/* Definition :- a Constructire ais  special member fucntion whose task is to initialize the ojetc of ts classs 
It is a special because its name is the same as the class name. The constructor in invoked whenevere n object of 
its assoicated class us created, it is called constructor becasue it constructs the values of the data members
of the class. 
*/

#include "iostream"
using namespace std;

class integer
{
    int m, n;
    public:
        // It is a Parameterized constructor
         integer(int, int);
         // Multiple constructor
         integer();
         integer(int, int,int);
         void display()
         {
             cout<<"m = "<< m <<endl;
             cout<<"n = "<< n <<endl;
         }
};
integer::integer(int a, int b){
    m = a;
    n = b;
}

/*
Multiple consturtors in a class
*/
integer::integer()
{
    cout<<"I am Constructure "<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    integer one(a,b);
    integer two;
    one.display();
}