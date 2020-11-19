#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		mp[ar[i]]=1;
	}
	ll ans=0;
	for(i=1;i<=30;i++)
	{
		if(!mp[i]) continue;
		ll s=0,mx=0;
		for(j=0;j<n;j++)
		{
			if(ar[j]<=i)
			s+=ar[j];
			else s+=INT_MIN;
			if(s<0)
			s=0;
			mx=max(mx,s);
		}
		ans=max(ans,mx-i);
	}
	cout<<ans;
}