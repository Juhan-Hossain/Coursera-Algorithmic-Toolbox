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
ll priod(ll m)
{
    ll x=0,y=1,i=0,mid=x+y,res;
    while(i<m*m+1)
    {
        mid=(x+y)%m;
        x=y;
        y=mid;
        if (x==0 && y==1)
        {
            res=i+1;
            break;
        }
        i++;
    }
    return res;
}
ll fib(ll n,ll m)
{
    ll t0=0,t1=1,s;
    if(n<=1 && n>=0)
        return n;
    for(ll i=2;i<=n;i++)
    {
        s=(t0+t1)%m;
        t0=t1;
        t1=s;
    }
    return s%m;
}
int main()
{
    ll n,m=10;
    cin>>n;
    ll p=(n+1)%priod(m);
    ll q=n%priod(m);
    ll temp=((fib(p,m)%m)*(fib(q,m)%m))%m;
    if(temp<0) cout<<temp+10<<endl;
    else cout<<temp<<endl;
    return 0;
}

