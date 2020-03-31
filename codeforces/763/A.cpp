#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[100000];
ll ar[100000];
map<ll,ll> mp;
ll root;
bool vis[100000];
bool dfs(ll x)
{
	vis[x]=true;
	bool ff=true;
	for(auto i:adj[x])
	{
		if(!vis[i])
		{
			ff=ff & dfs(i);
			if(x!=root and ar[i]!=ar[x])
			ff=false;
		}
	}
	return ff;
}
int main()
{
	ll x,y,i,j,k,m,n;
	cin>>n;
	vector<pair<ll,ll> > v;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		v.push_back({j,k});
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	bool fl=true;
	for(i=0;i<n-1;i++)
	{
		j=v[i].first;
		k=v[i].second;
		if(ar[j]!=ar[k])
		{
			fl=false;
			break;
		}
	}
	if(fl)
	cout<<"YES\n1";
	else
	{
		//cout<<j<<' '<<k<<endl;
		memset(vis,false,sizeof(vis));
		root=j;
		if(dfs(j))
		cout<<"YES\n"<<j+1;
		else
		{
			memset(vis,false,sizeof(vis));
			root=k;
			if(dfs(k))
			cout<<"YES\n"<<k+1;
			else cout<<"NO\n";
		}
	}
}