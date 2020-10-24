#include<bits/stdc++.h>
using namespace std;
#define ll int
ll n;
ll ar[300001];
list<ll> adj[300001];
ll ans=INT_MAX;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t;
	cin>>n;
	map<ll,ll> mp;
	for(i=0;i<n;++i)
	{
		cin>>ar[i];
		mp[ar[i]]++;
	}
	for(i=0;i<n-1;++i)
	{
		cin>>j>>k;
		--j,--k;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	ll ans=INT_MAX;
	for(i=0;i<n;i++)
	{
		ll y=ar[i];
		--mp[y];
		if(mp[y]==0)
		mp.erase(y);
		for(auto x:adj[i])
		{
			--mp[ar[x]];
			if(mp[ar[x]]==0)
			mp.erase(ar[x]);
			y=max(y,ar[x]+1);
		}
		if(mp.size()>0)
		{
			auto x=mp.end();
			x--;
			ll xx=(*x).first;
			y=max(y,xx+2);
		}
		ans=min(ans,y);
		for(auto x:adj[i])
		{
			++mp[ar[x]];
		}
		++mp[ar[i]];
	}
	cout<<ans;
}