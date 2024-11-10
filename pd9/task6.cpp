#include<iostream>
using namespace std;
void check_even_odd(int n,int arr[],int transformation);
main()
{
    int n,transformation;
    cout<<"enter the array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the array numbers"<<i+1<<":  ";
         cin>>arr[i];


    }
    cout<<"enter the number of transformation: ";
    cin>>transformation;
    check_even_odd( n, arr,transformation);
   cout<<"final transformation is"<<": ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }   
    
}
void check_even_odd(int n,int arr[],int transformation)
{
    for(int j=0;j<transformation;j++)
    {
        for(int i=0;i<n;i++)
        {
          if(arr[i]%2==0)
          {
            arr[i]-=2;
          }
             else
             {
                 arr[i]+=2;
             }
        }  
       
    }    
    
}