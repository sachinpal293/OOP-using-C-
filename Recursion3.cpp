#include "iostream"
using namespace std;
int getfab(int n)
{
    if(n==0||n==1){
        return n;
    }
    return getfab(n-1) + getfab(n-2);
}
int main()
{
    cout<<getfab(4);
    return 0;
}