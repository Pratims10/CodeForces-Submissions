#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[100001];
bool vis[100001];
ll deg[100001]={0};
ll ar[100001]={0};
void dfs(int x)
{
	vis[x]=true;
	for(auto xx:adj[x])
	{
		if(!vis[xx])
		{
			ar[xx]=ar[x]+1;
			dfs(xx);
//			cout<<xx+1<<' '<<x+1<<endl;
		}
	}
}
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	for(i=1;i<n;i++)
	{
		cin>>k;
		k--;
		adj[i].push_back(k);
		adj[k].push_back(i);
	}
	dfs(0);
	for(i=0;i<n;i++)
	{
		deg[ar[i]]++;
	}
//	for(i=0;i<n;i++)
//	cout<<ar[i]<<' ';
//	cout<<endl;
	ll ans=0;
	for(i=0;i<100001;i++)
	if(deg[i]%2==1)
	ans++;
	cout<<ans;
}