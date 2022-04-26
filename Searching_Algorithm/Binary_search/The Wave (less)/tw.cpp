#include<bits/stdc++.h>

using namespace std;
#define checkmate return 0
#define ll long long int

int main()
{
	int n,q;
    cin>>n>>q;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n,greater<int>());//descending order
      ll x;
     int j = sqrt(n);
     while(q--)
     {
         cin>>x;
        int  pos=0;
        while(pos+j<n&&ar[pos+j]>x)
        {
            pos+=j;
        }
        while(pos<n&&ar[pos]>x)
        {
            pos++;
        }
        if(ar[pos]==x)
        {
            cout<<"0"<<endl;
        }
        else if(pos%2==0)
        {
            cout<<"POSITIVE"<<endl;
        }
        else
        {
            cout<<"NEGATIVE"<<endl;
        }
     }
    checkmate;
}

