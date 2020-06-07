#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,t;
	t=1;
	while(t--)
	{
		cin>>n;
		ll ar[n],b[n];
		map<ll,ll> mp,mp2;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			mp[ar[i]]=i;
		}
		ll o=0,z=0;
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			mp2[b[i]]=i;
		}
		ll a[n];
		for(i=0;i<n;i++)
		{
			a[i]=mp2[ar[i]]-i;
			if(a[i]<0)
			a[i]+=n;
		}
		map<ll,ll> m;
		for(i=0;i<n;i++)
		{
			m[a[i]]++;
		}
		ll ans=1;
		for(auto x:m)
		{
			ans=max(ans,x.second);
		}
		cout<<ans<<endl;
	}
}