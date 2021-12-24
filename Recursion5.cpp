#include<iostream>
using namespace std;
int squr(int val,int n)
{
    if(n==0)
    { 
    return 1;
    }
    int answer = squr(val,n/2);
    if(n&1)
    {
        return val*answer*answer;
    }
    else{
        return answer*answer;
    }
    // return val*squr(val, n-1);

}
int main()
{
   int number, power;
   cout<<"Enter a number and its power ";
   cin>>number>>power;
   cout<<squr(number, power);
   return 0;
}
