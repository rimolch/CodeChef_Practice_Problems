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
    int *ptr =lower_bound(ar,ar+n,5);//6
    cout<<*ptr<<endl;
    checkmate;
}

//using vector
/*#include<bits/stdc++.h>

using namespace std;

#define checkmate return 0

unordered_map<char,int>symbols ={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

int main()
{

    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];//1 2 6 4 4
    }
    sort(ar.begin(),ar.end());
     for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";//1 2 4 4 6
    }
    cout<<endl;
    auto it =lower_bound(ar.begin(),ar.end(),5);//6
    cout<<*it<<endl;
    checkmate;
}

*/
