#include<bits/stdc++.h>

using namespace std;

unordered_map<char,int>symbols ={{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};

string is_balanced(string s)
{
    stack<char>st;
    for(char char_bracket_in_string:s)
    {
         if(symbols[char_bracket_in_string]<0)
         {
             st.push(char_bracket_in_string);
         }
         else
         {
             if(st.empty())//is_already empty() then return no
             {
                 return "NO";
             }
                 char top =st.top();
                 st.pop();
                 if(symbols[top]+symbols[char_bracket_in_string]!=0)
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
        cout<<is_balanced(s)<<endl;
    }
    return 0;
}
