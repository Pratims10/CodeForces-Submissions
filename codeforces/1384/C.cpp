#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[26];
ll ctr=0;
bool vis[26]={0};
ll dfs(ll x)
{
	vis[x]=true;
	ctr++;
	//cout<<x<<' ';
	for(auto i:adj[x])
	{
		if(!vis[i]) dfs(i);
	}
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<26;i++)
		adj[i].clear();
		ll ar[n];
		string s1,s2;
		cin>>s1>>s2;
		bool flag=true;
		for(i=0;i<n;i++)
		{
			ar[i]=s2[i]-s1[i];
			//cout<<ar[i]<<' ';
			if(ar[i]<0)
			flag=false;
		}
		if(!flag)
		{
			cout<<-1<<endl;
			continue;
		}
		map<pair<ll,ll>,ll> mp;
		for(i=0;i<n;i++)
		{
			ll x=s1[i];
			ll y=s2[i];
			mp[{x,y}]++;
		}
		for(auto x:mp)
		{
			//cout<<x.first.first<<' '<<x.first.second<<endl;
			adj[x.first.first-97].push_back(x.first.second-97);
			adj[x.first.second-97].push_back(x.first.first-97);
		}
		ctr=0;
		memset(vis,false,sizeof(vis));
		ll ans=0;
		for(i=0;i<26;i++)
		{
			if(!vis[i])
			{
				ctr=0;
				dfs(i);
				ans+=ctr-1;
	//			cout<<endl;
			}
		}
		cout<<ans<<endl;
	}
}