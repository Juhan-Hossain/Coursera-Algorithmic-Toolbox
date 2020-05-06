#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>v;
    //v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    for(long long i=2;i<10000000;i++)
    {
        v.push_back((v[i-1]+v[i-2])%10);
    }
    long long n;
    cin>>n;
    cout<<v[n-1]<<"\n";
    return 0;
}
