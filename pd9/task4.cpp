#include<iostream>
using namespace std;
void check_7(int arr[],int n);
main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the arrays numbers:"<<i+1<<"  ";
        cin>>arr[i];
    }
    check_7( arr, n);
}
void check_7(int arr[],int n)
{
    bool find=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==7)
        {
            find=true;
            break;
        }
    }
    if(find)
    {
        cout<<"Boom"<<endl;
    }
    else{
        cout<<"THere is no seven in the array "<<endl;
    }

}