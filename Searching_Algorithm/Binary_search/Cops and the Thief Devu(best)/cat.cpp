/*Here, is the pseudo code for this question. 
take a look.
ans = 0
for each house from 1 to 100:
        safe = true
for each cop houses from 1 to N:
if (the cop can reach the house)
safe = false
if (safe) ans += 1*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
   while(t--)
   {
	int m,x,y;
	cin>>m>>x>>y;
	//int dist = x*y;
	vector<int>ar(m);
	for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    int dist = x*y;
    int count =0;
    //bool is_safe = true;
    for(int i=1;i<=100;i++)
    {
         bool is_safe = true;
        for(int j=0;j<m;j++)
        {
            int l = max(ar[j]-dist,1);
            int r = min(100,ar[j]+dist);
            if(i>=l&&i<=r)
            {
                is_safe = false;
            }
        }
        if(is_safe)
        {
            count+=1;
        }
    }
    cout<<count<<endl;
   }
    return 0;
}
