#include<iostream>
using namespace std;
bool isarm(int n)
{
    int copy=n;
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
    return sum==copy;
}
int main()
{
    int n;
    cin>>n;
    if(isarm(n))
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong number"<<endl;
    }
}