#include "iostream"
using namespace std;
void counting(int);
int main()
{
    counting(5);
}

void counting(int n)
{
    if(n==0) return;
    // cout<<n<<endl;
    counting(n-1);
    cout<<n<<endl;
}

//Question :- is this Head or Tail recursion, What is the time complexcity & space