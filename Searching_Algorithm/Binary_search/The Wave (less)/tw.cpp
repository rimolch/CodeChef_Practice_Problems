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
//another method
/*#include<bits/stdc++.h>

using namespace std;

#define checkmate return 0

#define ll long long int

int main()
{

    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    while(q--)
    {
        int x;
        cin>>x;
       int *ptr= lower_bound(ar,ar+n,x);//The lower_bound() method in C++ is used to return an iterator pointing to the first element in the range [first, last) which has a value not less than val.
      // reference https://www.javatpoint.com/cpp-algorithm-lower_bound-function
      if(*ptr==x)
      {
         cout<<"0"<<endl;
      }
      else
      {
        int x=ptr-ar+1;//address scaling
        if(x&1)//x & 1 is equivalent to x % 2==1.
        {
           cout<<"POSITIVE"<<endl;
        }
        else
        {
           cout<<"NEGATIVE"<<endl;
        }
      }
    }
    checkmate;
}

*/
