#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[100001];
bool vis[100001];
ll deg[100001]={0};
ll ar[100001]={0};
ll ans=0;
void dfs(int x)
{
	vis[x]=true;
	for(auto xx:adj[x])
	{
		if(!vis[xx])
		{
			dfs(xx);
			ar[x]+=ar[xx];
		}
	}
	ar[x]++;
	if(ar[x]%2==0)
	ans++;
}
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
		deg[j]++;
		deg[k]++;
	}
	if(n%2==1)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	for(i=0;i<n;i++)
	vis[i]=false;
	for(i=0;i<n;i++)
	{
		if(deg[i]==1 && i!=0)
		ar[i]=0;
		else ar[i]=0;
	}
	dfs(0);
	cout<<ans-1;
}