#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
map<pair<ll,ll>,ll> mp;
list<ll> adj[200001];
ll in[200001],out[200001];
void dfs(ll x,ll par)
{
	in[x]=0;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		if(!mp[{x,i}]) in[x]++;
		dfs(i,x);
		in[x]+=in[i];
	}
}
void dfs2(ll x,ll par)
{
	for(auto i:adj[x])
	{
		if(i==par) continue;
		out[i]=out[x]+in[x]-in[i];
		if(!mp[{x,i}]) out[i]--;
		if(!mp[{i,x}]) out[i]++;
		dfs2(i,x);
	}
}
int main()
{
	ll i,j,k,m;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--,k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
		mp[{j,k}]=1;
	}
	dfs(0,-1);
	out[0]=0;
	dfs2(0,-1);
	ll mn=9999999999999;
	for(i=0;i<n;i++)
	mn=min(mn,in[i]+out[i]);
	cout<<mn<<endl;
	for(i=0;i<n;i++)
	if(mn==in[i]+out[i])
	cout<<i+1<<' ';
}