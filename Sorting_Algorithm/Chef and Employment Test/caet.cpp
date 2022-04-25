#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int k,n,new_length=0;
      cin>>n>>k;//5 2
      vector<int>ar(n);
      for(int i=0;i<n;i++)
      {
          cin>>ar[i];
      }
      sort(ar.begin(),ar.end());
      new_length = (ar.size()+k);
      cout<<ar[new_length/2]<<endl;
    }
    return 0;
}
