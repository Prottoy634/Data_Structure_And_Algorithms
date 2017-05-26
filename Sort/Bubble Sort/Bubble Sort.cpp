/*BUBBLE SORT for ascending order*/
#include<iostream>
using namespace std;
void printArray(int arr[], int sz) //print values of array
{
    int i;
    for (i=0; i < sz; i++)
        cout<<arr[i]<<endl;
    cout<<"\n";
}
void bubble(int A[],int n)
{
    int flag;

    for(int i=1;i<n;i++)
    {
     flag=0;
      //cout<<i<<"th pass"<<endl;
     for(int j=0;j<n-i;j++)
     {  //cout<<"Inner changings"<<endl;
       if(A[j]>A[j+1])
       {
         swap(A[j],A[j+1]);
         flag=1;
       }
       //printArray(A,n);
     }
     //cout<<i<<"th pass after change"<<endl;
      //printArray(A,n);
     if (flag==0){break;}

    }
}
int main()
{
   int A []={6,8,2,4,1};
   int s = sizeof(A)/sizeof(A[0]);
   bubble(A,s);
   cout<<"Sorted Array :"<<endl;
   printArray(A,s);

   return 0;
}

