#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[100001];
ll n;
ll mod=1e9+7;
ll sub[100001];
bool srt(ll x,ll y)
{
	return x>y;
}
void dfs(ll x,ll par)
{
	sub[x]=1;
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs(i,x);
		sub[x]+=sub[i];
	}
}
int main()
{
	ll i,j,k,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		adj[i].clear();
		vector<pair<ll,ll>> e;
		for(i=0;i<n-1;i++)
		{
			cin>>j>>k;
			k--,j--;
			adj[j].push_back(k);
			adj[k].push_back(j);
			e.push_back({j,k});
		}
		dfs(0,-1);
		vector<ll> v;
		for(i=0;i<n-1;i++)
		{
			ll mn=min(sub[e[i].first],sub[e[i].second]);
			v.push_back((mn*(n-mn)));
		}
		sort(v.begin(),v.end(),srt);
		vector<ll> val;
		cin>>m;
		for(i=0;i<m;i++)
		{
			ll x;
			cin>>x;
			val.push_back(x);
		}
		if(m<n-1)
		{
			while(val.size()<n-1)
			{
				val.push_back(1);
			}
		}
		else
		{
			sort(val.begin(),val.end(),srt);
			list<ll> q;
			for(auto x:val)
			q.push_back(x);
			while(q.size()>n-1)
			{
				ll a=q.front();
				q.pop_front();
				ll b=q.front();
				q.pop_front();
				q.push_front((a*b)%mod);
			}
			val.clear();
			for(auto x:q)
			val.push_back(x);
		}
		sort(val.begin(),val.end(),srt);
		ll ans=0;
		for(i=0;i<n-1;i++)
		{
			v[i]%=mod;
			ll x=(v[i]*val[i])%mod;
			ans+=x;
			ans%=mod;
		}
		cout<<ans%mod<<endl;
	}
}