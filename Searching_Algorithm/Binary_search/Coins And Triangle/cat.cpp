#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll check(ll mid,ll n)
{
    return ((mid*(mid+1))/2<=n);
}
void solve()
{
    ll n,ans=-1,mid=0;
    cin>>n;
    ll l=1,r =1e7;
    while(l<=r)
    {
       mid = l+(r-l)/2;
       if(check(mid,n))
       {
           ans = max(ans,mid);
           l =mid+1;
       }
       else
       {
           r =mid-1;
       }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}
