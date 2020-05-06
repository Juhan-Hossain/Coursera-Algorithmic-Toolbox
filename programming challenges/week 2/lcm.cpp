#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rep2(i,b) for(ll i=0;i<b;i++)
#define repl(i,a,b) for(ll i=a;i<=b;i++)
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll g=gcd(a,b);
    ll lcm=(a*b)/g;
    cout<<lcm<<endl;
    return 0;
}
