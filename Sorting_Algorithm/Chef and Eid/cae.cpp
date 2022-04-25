#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,ans;
      cin>>n;
      ll mini = 1e5+7;
      vector<ll>ar(n);
      for(ll i=0;i<n;i++)
      {
          cin>>ar[i];
      }
      sort(ar.begin(),ar.end());
      for(ll i=1;i<=n;i++)
      {
          ans = abs(ar[i]-ar[i-1]);
          mini = min(ans,mini);
      }
      cout<<mini<<endl;
    }
    return 0;
}
