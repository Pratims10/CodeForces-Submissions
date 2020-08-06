#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
list<ll> adj[200001];
ll deg[200001];
vector<ll> res;
void bfs()
{
	list<ll> q;
	for(ll i=0;i<n;i++)
	{
		if(deg[i]==0)
		q.push_back(i);
	}
	while(!q.empty())
	{
		ll x=q.front();
		q.pop_front();
		res.push_back(x);
		for(auto i:adj[x])
		{
			deg[i]--;
			if(deg[i]==0)
			q.push_back(i);
		}
	}
}
int main()
{
	ll i,j,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		vector<pair<ll,ll>> v;
		for(i=0;i<n;i++)
		{
			deg[i]=0;
			adj[i].clear();
		}
		for(i=0;i<m;i++)
		{
			ll type;
			cin>>type>>j>>k;
			j--,k--;
			if(type==0)
			{
				v.push_back({j,k});
			}
			else
			{
				adj[j].push_back(k);
				++deg[k];
			}
		}
		res.clear();
		bfs();
		if(res.size()<n)
		cout<<"NO\n";
		else
		{
			ll pos[n];
			for(i=0;i<n;i++)
			pos[res[i]]=i;
			cout<<"YES\n";
			for(i=0;i<n;i++)
			{
				for(auto x:adj[i])
				cout<<i+1<<" "<<x+1<<endl;
			}
			for(auto x:v)
			{
				if(pos[x.first]<pos[x.second])
				cout<<x.first+1<<" "<<x.second+1;
				else cout<<x.second+1<<' '<<x.first+1;
				cout<<'\n';
			}
		}
	}
}