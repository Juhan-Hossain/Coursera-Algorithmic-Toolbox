#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fib(int n)
{
    int t0=0,t1=1,s;
    if(n<=1 && n>=0)
        return n;
    for(int i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
