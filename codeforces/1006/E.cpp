#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[200001];
ll vis[200001],tin[200001],tout[200001];
vector<ll> v;
void dfs(ll x)
{
	vis[x]=true;
//	cout<<x<<' ';
	v.push_back(x);
	tin[x]=v.size()-1;
	for(auto i:adj[x])
	{
		if(!vis[i])
		dfs(i);
	}
	tout[x]=v.size()-1;
}
int main()
{
    ll i,j,k,q,m,n,t;
    cin>>n>>q;
    for(i=1;i<n;i++)
    {
    	cin>>j;
    	j--;
    	adj[j].push_back(i);
    	adj[i].push_back(j);
	}
	for(i=0;i<n;i++)
	adj[i].sort();
	for(i=0;i<n;i++)
	vis[i]=false;
	dfs(0);
//	cout<<v.size();
	while(q--)
	{
		ll a,b;
		cin>>a>>b;
		a--;
		b--;
		ll x;
		if(tin[a]+b>=v.size())
		{
			cout<<-1<<endl;
			continue;
		}
		x=v[tin[a]+b];
		if(tin[a]<=tin[x] and tout[a]>=tout[x])
		cout<<x+1<<endl;
		else cout<<-1<<endl;
	}
}