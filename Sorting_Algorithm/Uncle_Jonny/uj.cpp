#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>ar(n);
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];//1 2 3 9 4
       }
       int k;cin>>k;
       int jony=ar[k-1],ans=0;
       sort(ar.begin(),ar.end());
       for(int i=0;i<n;i++)
       {
           if(jony==ar[i])
           {
               ans = i+1;
               break;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}
