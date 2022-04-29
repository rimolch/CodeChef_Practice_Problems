#include<bits/stdc++.h>

using namespace std;

#define checkmate return 0

unordered_map<char,int>symbols ={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];//1 2 6 4 4
    }
    sort(ar,ar+n);
     for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";//1 2 4 4 6
    }
    cout<<endl;
    int *ptr =upper_bound(ar,ar+n,4);//6
    cout<<*ptr<<endl;
    checkmate;
}

