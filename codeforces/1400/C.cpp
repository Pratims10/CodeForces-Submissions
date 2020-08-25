#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll x;
		string s;
		cin>>s;
		n=s.length();
		cin>>x;
		string s1;
		for(i=0;i<n;i++)
		s1+='1';
		for(i=0;i<n;i++)
		{
			if(s[i]=='0' and i+x<n)
			s1[i+x]='0';
			if(s[i]=='0' and i-x>=0)
			s1[i-x]='0';
		}
		bool f=true;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				bool ok=false;
				if(i+x<n and s1[i+x]=='1') ok=true;
				if(i-x>=0 and s1[i-x]=='1') ok=true;
				if(!ok) f=false;
			}
		}
		if(!f) cout<<-1<<endl;
		else cout<<s1<<endl;
	}
}