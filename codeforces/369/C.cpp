#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<ll,ll>,ll> mp,mp2;
list<ll> adj[200001];
ll wh[200001]={0};
ll dp[2000001];
void dfs(ll x,ll par)
{
	if(wh[x])
	dp[x]=1;
	else dp[x]=0;
	for(auto i:adj[x])
	{
		if(i!=par)
		{
			dfs(i,x);
			dp[x]+=dp[i];
		}
	}
}
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k>>m;
		j--;k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
		if(m==2)
		wh[j]=1,wh[k]=1;
	}
	dfs(0,-1);
	vector<ll> v;
	for(i=0;i<n;i++)
	if(dp[i]==1)
	v.push_back(i+1);
	cout<<v.size()<<endl;
	for(auto x: v)
	cout<<x<<' ';
}