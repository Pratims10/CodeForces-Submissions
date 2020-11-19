#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		stack<char> s1,s2;
		ll ans=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='(')
			s1.push(s[i]);
			else if(s[i]==')')
			{
				if(!s1.empty())
				{
					s1.pop();
					ans++;
				}
			}
			else if(s[i]=='[')
			s2.push(s[i]);
			else if(s[i]==']')
			{
				if(!s2.empty())
				{
					s2.pop();
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}