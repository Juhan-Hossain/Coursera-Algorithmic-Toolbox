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
    ll l,r,m=10,res=0;
    cin>>l>>r;
    /*for(ll i=l;i<=r;i++)
    {
        ll p=i%priod(m);
        ll temp=fib(p,m)%m;
        res+=temp%m;
    }*/
    if(l==r)
    {
        r=r%60;
        ll p=(r)%priod(m);
        ll temp=fib(p,m);
        cout<<temp<<endl;
        //return 0;
    }
    else
    {
       r=r%60;
       l=l%60;
       ll p=(r+2)%priod(m);
       ll temp1=fib(p,m)-1;
       ll q=(l+1)%priod(m);
       ll temp2=fib(q,m)-1;

       ll ans=temp1-temp2;
       if(ans<0) cout<<ans+10<<endl;
       else cout<<ans<<endl;
    }
    return 0;
}
