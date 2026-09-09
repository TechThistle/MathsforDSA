#include<iostream>
using namespace std;
string isprime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return "Not Prime";
        }
        return "Prime";
    }
}
int main()
{
    int n;
    cin >> n;
    cout << isprime(n) << endl;
    return 0;
}