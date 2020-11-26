#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	map<ll,ll> mp1,mp2,mp;
	ll ar[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i]>>b[i];
		mp1[ar[i]]++;
		mp2[b[i]]++;
		if(ar[i]==b[i])
		mp[ar[i]]++;
	}
	ll ans=INT_MAX;
	ll req=n/2;
	if(n%2==1)
	req++;
	for(i=0;i<n;i++)
	{
		ll mx=mp1[ar[i]]+mp2[ar[i]]-mp[ar[i]];
		if(mp1[ar[i]]>=req)
		{
			cout<<0;
			return 0;
		}
		if(mx>=req)
		{
			ll shift=req-mp1[ar[i]];
			ans=min(ans,shift);
		}
	}
	for(i=0;i<n;i++)
	{
		ll mx=mp1[b[i]]+mp2[b[i]]-mp[b[i]];
		if(mx>=req)
		{
			ll shift=req-mp1[b[i]];
			ans=min(ans,shift);
		}
	}
	if(ans==INT_MAX)
	ans=-1;
	cout<<ans;
}