#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
	set<int,greater<int> >s;
	set<int>::iterator it;
	s.insert(12);
		s.insert(3);
			s.insert(2);
				s.insert(42);
    for(it=s.begin();it!=s.end();it++)
    {
        //cout<<*it<<endl;
        printf("%d\n",*it);
    }
	return 0;
}
