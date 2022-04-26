//using map and vector
#include<bits/stdc++.h>

#define checkmate return 0

using namespace std;

int main()
{
	int t;
	cin>>t;
   while(t--)
   {
	  int n;
	  cin>>n;
	  vector<int>ar(101);
	  map<int,int>mp;
	  for(int i=0;i<n;i++)
      {
          cin>>ar[i];
          mp[ar[i]]++;
           //here counting the number of occurrances
      }
       int c=0,ans=0;
      for(auto it:mp)
      {
          if(it.second!=0)
          {
              c+=it.second;
              if(c>(n-c))
              {
                  ans+=it.second;
              }
          }
      }
      cout<<ans<<endl;
   }
    checkmate;
}
//using only vector of another method
/*#include<bits/stdc++.h>

#define checkmate return 0

using namespace std;

int main()
{
	int t;
	cin>>t;
   while(t--)
   {
	  int n;
	  cin>>n;
	  vector<int>ar(101);
	  for(int i=0;i<n;i++)
      {
          int x;
          cin>>x;
          ar[x]++;//we are counting the number of occurrance
      }
      int c=0,ans=0;
      for(int i=0;i<=100;i++)//100 because we have to check each of the marks and we are using frequency array here
      {
          if(ar[i]!=0)
          {
              c+=ar[i];
              if(c>(n-c))
              {
                  ans+=ar[i];
              }
          }
      }
      cout<<ans<<endl;
   }
    checkmate;
}

*/
