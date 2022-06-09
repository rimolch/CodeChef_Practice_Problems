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
/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	priority_queue<int>pq;
	pq.push(12);
	pq.push(13);
	pq.push(2);
	pq.push(3);
	while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
	return 0;
}
*/
