#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,ctr,t,n;
	cin>>t;
	ll p=1,x=0;
	ll o=0;
	stack<ll> st;
	st.push(1);
	ll pra=pow(2,32);
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="for")
		{
			cin>>j;
			if(!st.empty())
			st.push(min(j*st.top(),pra));
			else st.push(j);
		}
		else if(s=="end")
		{
			st.pop();
		}
		else if(s=="add")
		{
			if(!st.empty()){
			x+=st.top();
			}
			else x+=1;
			if(x>pow(2,32)-1)
			{
				cout<<"OVERFLOW!!!";
				return 0;
			}
		}
//		cout<<x<<' ';
	}
	if(x<=pow(2,32)-1)
	cout<<x;
	else cout<<"OVERFLOW!!!";
}