#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
list<ll> adj[300001];
map<pair<ll,ll>,ll> mp;
ll ar[300001];
ll ans=0;
ll dp1[300001],dp2[300001];
void dfs(ll x,ll par)
{
	vector<ll> v;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs(i,x);
		v.push_back(dp1[i]-mp[{i,x}]);
	}
	sort(v.begin(),v.end());
	ll ans1=ar[x];
	if(v.size()>0 and v.back()>0)
	ans1+=v.back();
	dp1[x]=ans1;
	reverse(v.begin(),v.end());
	ans=max(ans,dp1[x]);
	if(v.size()==1)
	ans=max(ans,ar[x]+v[0]);
	else if(v.size()>1)
	ans=max(ans,ar[x]+v[0]+v[1]);
}
int main()
{
	ll i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n-1;i++)
	{
		ll a;
		cin>>j>>k>>a;
		j--,k--;
		mp[{j,k}]=a;
		mp[{k,j}]=a;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	dfs(0,-1);
	cout<<ans;
}