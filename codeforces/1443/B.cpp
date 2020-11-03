#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		string s;
		cin>>a>>b;
		cin>>s;
		n=s.length();
		ll ans=0;
		for(i=0;i<n;i++)
		if(s[i]=='1')
		ans=a;
		if(ans==0)
		{
			cout<<0<<'\n';
			continue;
		}
		ans=0;
		i=0;
		while(i<n and s[i]=='0')
		i++;
		for(;i<n;)
		{
			j=i;
			ll ctr=0;
			while(i<n and s[i]==s[j])
			{
				i++;
				ctr++;
			}
			if(s[j]=='0')
			{
				if(i==n)
				continue;
				if(ctr*b<=a)
				{
					while(i<n and s[i]=='1')
					i++;
					ans+=ctr*b;
				}
			}
			else
			ans+=a;
		}
		cout<<ans<<'\n';
	}
}