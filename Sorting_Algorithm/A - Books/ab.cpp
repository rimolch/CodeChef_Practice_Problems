#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a1[n];
      int a2[1000001]={0};
      for(int i=0;i<n;i++)
      {
          cin>>a1[i];
          a2[a1[i]]=i;
      }
      for(int i=0;i<n;i++)
      {
          cout<<n-1-a2[a1[i]]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
