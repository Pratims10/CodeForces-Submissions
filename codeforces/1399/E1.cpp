#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,s,sum;
list<pair<ll,ll>> adj[100001];
ll cnt[100001],cnt2[100001];
map<pair<ll,ll>,ll> mp;
void dfs(ll x,ll par)
{
	bool f=false;
	cnt[x]=0;
	for(auto i:adj[x])
	{
		if(i.first==par) continue;
		dfs(i.first,x);
		f=true;
		cnt[x]+=cnt[i.first];
		cnt2[mp[{x,i.first}]]=cnt[i.first];
		sum+=cnt[i.first]*i.second;
	}
	if(!f) cnt[x]=1;
}
int main()
{
	ll i,j,k,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(i=0;i<n;i++) adj[i].clear();
		sum=0;
		mp.clear();
		ll wt[n];
		for(i=0;i<n-1;i++)
		{
			ll u,v,w;
			cin>>u>>v>>w;
			u--,v--;
			adj[u].push_back({v,w});
			adj[v].push_back({u,w});
			wt[i]=w;
			mp[{u,v}]=i;
			mp[{v,u}]=i;
		}
		for(i=0;i<n;i++)
		cnt[i]=0;
		dfs(0,-1);
		set<pair<ll,ll>> st;
		for(i=0;i<n-1;i++)
		{
			st.insert({cnt2[i]*(wt[i]-wt[i]/2),i});
		}
		ll ans=0;
		while(sum>s)
		{
			pair<ll,ll> p=*(prev(st.end()));
			st.erase(prev(st.end()));
			sum-=p.first;
			wt[p.second]/=2;
			i=p.second;
			st.insert({cnt2[i]*(wt[i]-wt[i]/2),i});
			ans++;
		}
		cout<<ans<<endl;
	}
}
/*
10 119

5 4 9

10 8 1

4 3 10

6 5 1

3 2 1

8 7 7

2 1 2

9 7 4

7 6 9
*/