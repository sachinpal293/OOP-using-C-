#include "iostream"
using namespace std;

bool checksorted(int arr[],int size, int index)
{
    
    if(index>= size)
    {
        return true;
    }
    if(arr[index] < arr[index-1])
    {
        return false;
    }
    checksorted(arr,size, index+1);
}

int main()
{
   cout<<"Enter the size of arrays"<<endl;
   int n;
   cin>>n;

   int arr[n];
   cout<<"Enter the values of arrays"<<endl;
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
   }

   bool answer = checksorted(arr,n,1);
   if(answer==true)
   {
       cout<<"Array is sorted"<<endl;
   }
   else
   {
       cout<<"Array is not sorted"<<endl;
   }
}