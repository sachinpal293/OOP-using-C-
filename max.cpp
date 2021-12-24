#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greater than others"<<endl;
        }
        else{
            cout<<c<<" is greater than others"<<endl;
        }
    }
    else{
        if(b>c)
        {
            cout<<b<<" is greater than others"<<endl;
        }
        else{
            cout<<c<<" is greater than others"<<endl;
        }
    }
    return 0;
}
