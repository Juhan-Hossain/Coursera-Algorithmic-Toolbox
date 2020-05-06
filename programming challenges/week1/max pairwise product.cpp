#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,p;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    p=a[n-1]*a[n-2];
    cout<<p<<"\n";
    return 0;
}
