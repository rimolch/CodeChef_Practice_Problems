#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define checkmate return 0

int main()
{
    ll int a;
    cin>>a;
    ll int k =(a+6)/6;
    ll int l = 6*k-6;
    ll int diff = a-l;
    if(diff==0||diff==1||diff==3)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    checkmate;
}
