#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll q;
		cin>>n>>q;
		string s;
		cin>>s;
		ll f0=n+1,f1=n+1,l0=-1,l1=-1;
		for(i=0;i<n;i++)
		{
			if(s[i]=='0')
			l0=i;
			else
			l1=i;
		}
		for(i=n-1;i>=0;i--)
		{
			if(s[i]=='0')
			f0=i;
			else
			f1=i;
		}
		while(q--)
		{
			ll l,r;
			cin>>l>>r;
			l--,r--;
			bool f=false;
			if(s[l]=='0')
			{
				if(f0<l)
				f=true;
			}
			else
			{
				if(f1<l)
				f=true;
			}
			if(s[r]=='0')
			{
				if(l0>r)
				f=true;
			}
			else
			{
				if(l1>r)
				f=true;
			}
			if(f)
			cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}