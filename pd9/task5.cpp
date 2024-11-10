#include<iostream>
using namespace std;
void check(int n, string arr[]);
main()
{
    int n=4;
    string arr[n];
    for(int i=0; i<n ;i++)
    {
        cout<<"enter the  string"<<i+1<<": ";
        cin>>arr[i];
    }
    check( n,  arr);


}
void check(int n, string arr[])
{
    bool all_same=true; 
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[0])
        {
         all_same=false;
        
          break;
        }
    }
    if(all_same)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
