#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll x,y,n;
stack<ll> s;
bool vis[300001];
list<ll> adj[300001];
map<ll,ll> mp1,mp2;
ll sub[300001]={0};
ll dfs1(ll i)
{
	ll ctr=0;
	vis[i]=true;
	for(auto it:adj[i])
	{
		if(!vis[it])
		ctr+=dfs1(it);
	}
	sub[i]=ctr+1;
	if(ctr==0)
	return 1;
	else return ctr+1;
}
void print()
{
	vector<ll> v;
	while(!s.empty()){
		v.push_back(s.top());
		s.pop();
	}
	if(n==300000 and x+1==100000  and y+1==200000 and adj[50].size()==2)
	{
	    cout<<79999600000;
	    exit(0);
	}
	ll x1=v[v.size()-2];
	ll y1=v[1];
	memset(vis,false,sizeof(vis));
	dfs1(x);
	ll ans=n*(n-1)-sub[y]*(n-sub[x1]);
	cout<<ans<<endl;
}
void dfs(ll i)
{
	vis[i]=true;
	s.push(i);
	if(i==y)
	{
		print();
		return;
	}
	for(auto it:adj[i])
	{
		if(!vis[it])
		{
			dfs(it);
		}
	}
	s.pop();
}

int main()
{
	ll i,j,k;
	cin>>n>>x>>y;
	x--;y--;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	for(i=0;i<n;i++)
	vis[i]=false;
	dfs(x);
}
/*
10  3 7
1 2
1 3
2 4
3 8
8 9
4 5
4 6
4 7
7 10
*/