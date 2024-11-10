#include<iostream>
using namespace std;
int calculate_price(string fruit_name,float quantity);
int main()
{
   string fruit_name;
   int quantity;
   cout<<"Enter the fruit name: ";
   cin>>fruit_name;
    cout<<"enter the quantity: ";
    cin>>quantity;
    float result;
    result=calculate_price( fruit_name, quantity);
    cout<<result;
}
int calculate_price(string fruit_name,float quantity)
{
    int price, find,result;
    string cal[4]={"peach","apple","guava","watermelon"};
    int fr[4]={60,70,40,30};
    for(int i=0;i<4;i++)
    {
        
        if(cal[i]==fruit_name)
        {
            find=i;
        }
    }
    price=fr[find];
    result=price*quantity;
    return result;
}