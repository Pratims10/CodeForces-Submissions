#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll f=0;
		for(i=0;i<n;i++)
		{
			if(mp[ar[i]])
			f=1;
			mp[ar[i]]=1;
		}
		if(f==0)
		cout<<"NO\n";
		else cout<<"YES\n";
	}
}