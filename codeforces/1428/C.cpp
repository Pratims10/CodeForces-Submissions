#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		stack<char> st;
		for(i=0;i<n;i++)
		{
			if(st.empty())
			st.push(s[i]);
			else
			{
				if(s[i]=='A')
				st.push(s[i]);
				else
				{
					st.pop();
				}
			}
		}
		ll ans=st.size();
		cout<<ans<<endl;
	}
}