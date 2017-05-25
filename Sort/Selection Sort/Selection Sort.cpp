#include<iostream>
using namespace std;
void printArray(int arr[], int sz) //print values of array
{
    int i;
    for (i=0; i < sz; i++)
        cout<<arr[i]<<endl;
    cout<<"\n";
}
void selection(int A[],int n)
{
    int minI;
    for(int i=0;i<n-1;i++)
    {
     minI=i;
     //cout<<i<<"th Pass:"<<endl;
     for(int j=i+1;j<n;j++) //finding minimum value from remaining elements
     {
       if(A[j]<A[minI])
       {
         minI=j;
       }
      //cout<<"value of J:\t "<<j<<endl;
     }
     swap(A[minI],A[i]);  //C++ library function  for wapping two variables
     //printArray(A,n);
    }
}
int main()
{
   int A []={22,8,6,1,4};
   int s = sizeof(A)/sizeof(A[0]);
   selection(A,s);
   cout<<"Sorted Array :"<<endl;
   printArray(A,s);

   return 0;
}
