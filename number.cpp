#include "iostream"
using namespace std;
int main() {
    int number=10,bit[32],rem=0,i=0;
    cin>>number;
    while (number!=0)
    {
      rem = number%2;
      bit[i]=rem;
      number=number/2;
      i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<bit[j];
    }
    return 0;
}
