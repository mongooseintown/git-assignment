#include<bits/stdc++.h>
using namespace std;
void helloworld()
{
    cout<<"Hello World"<<endl;
}
long long factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main ()
{
    helloworld();
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}