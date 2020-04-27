#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll dis[201];
map<string,ll> mp;
list<ll> adj[201];
void dfs(ll x,ll par)
{
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dis[i]=dis[x]+1;
		dfs(i,x);
	}
}
int main()
{
	ll i,j,k,m,t;
	ll ctr=1;
	cin>>n;
	n++;
	string s1,s2,s3;
	mp["polycarp"]=ctr++;
	for(i=0;i<n-1;i++)
	{
		cin>>s1>>s2>>s3;
		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
		if(!mp[s1])
		mp[s1]=ctr++;
		if(!mp[s3])
		mp[s3]=ctr++;
		adj[mp[s1]-1].push_back(mp[s3]-1);
		adj[mp[s3]-1].push_back(mp[s1]-1);
	//	cout<<mp[s1]-1<<' '<<mp[s3]-1<<endl;
	}
	dis[0]=1;
	dfs(0,-1);
	ll ans=1;
	for(i=0;i<n;i++)
	ans=max(ans,dis[i]);
	cout<<ans;
}