#include<bits/stdc++.h>

using namespace std;

#define checkmate return 0

unordered_map<char,int>symbols ={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string is_Balanced(string s)
{
     stack<char>st;
     for(char bracket:s)
     {
         if(symbols[bracket]<0)
         {
             st.push(bracket);
         }
         else
         {
             if(st.empty())//is_already empty() then return no
             {
                 return "NO";
             }
             char top =st.top();
             st.pop();
             if(symbols[top]+symbols[bracket]!=0)
             {
                    return "NO";
             }
         }
     }
     if(st.empty())
     {
         return "YES";
     }
     else
     {
         return "NO";
     }
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<is_Balanced(s)<<endl;
    }
    checkmate;
}

