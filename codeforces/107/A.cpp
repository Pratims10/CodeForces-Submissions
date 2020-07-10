#include<bits/stdc++.h>
using namespace std;
#define ll long long int
pair<ll,ll> adj[1001];
vector<pair<pair<ll,ll>,ll>> ans;
ll in[1001],out[1001];
void bfs(ll x)
{
	ll val=INT_MAX,i=x;
	while(!(out[i]==0 and in[i]==1))
	{
		val=min(val,adj[i].second);
		i=adj[i].first;
	}
	ans.push_back({{x,i},val});
}
int main()
{
	ll l,r,i,j,k,n,m;
	cin>>n>>m;
	memset(in,0,sizeof(in));
	memset(out,0,sizeof(out));
	for(i=0;i<m;i++)
	{
		cin>>r>>j>>k;
		adj[r-1]={j-1,k};
		out[r-1]++;
		in[j-1]++;
	}
	for(i=0;i<n;i++)
	{
		if(out[i]==1 and in[i]==0)
		{
			bfs(i);
		}
	}
	cout<<ans.size()<<endl;
	for(auto x:ans)
	{
		cout<<x.first.first+1<<' '<<x.first.second+1<<' '<<x.second<<endl;
	}
}