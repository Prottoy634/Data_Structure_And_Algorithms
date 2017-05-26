#include<iostream>
using namespace std;
void printArray(int arr[], int sz) //print values of array
{
    int i;
    for (i=0; i < sz; i++)
        cout<<arr[i]<<endl;
    cout<<"\n";
}
void insertion(int A[],int n)
{
   int value,hole;

    for(int i=1;i<n;i++)
    {
      value=A[i];
      hole=i;
      //cout<<i<<"th pass"<<endl;
      while(hole>0 && A[hole-1]>value)
        {
         //cout<<"Before"<<endl;
          //printArray(A,n);
          A[hole]=A[hole-1];
          hole=hole-1;
         // cout<<"After"<<endl;
          //printArray(A,n);
        }
        A[hole]=value;
        //cout<<"At last"<<endl;
        //printArray(A,n);

    }
}
int main()
{
   int A []={8,6,4,2,1};
   int s = sizeof(A)/sizeof(A[0]);
  insertion(A,s);
   cout<<"Sorted Array :"<<endl;
   printArray(A,s);

   return 0;
}

