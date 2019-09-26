#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll u,v,i,j,k,m,n;
	cin>>n>>m;
	list<ll> adj[n];
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		--u;--v;
		if(u==v)
		continue;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	if(n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	bool visited[n];
	memset(visited,false,sizeof(visited));
	vector<ll> ans;
	ans.push_back(0);
	set<int,greater<int> > st;
	list<ll>::iterator it;
	visited[0]=true;
	for(it=adj[0].begin();it!=adj[0].end();it++)
	{
		if(!visited[*it])
		st.insert(*it);
	}
	while(true)
	{
		ll x=*prev((st.end()));
		ans.push_back(x);
//		cout<<x<<endl;
		visited[x]=true;
		st.erase(x);
		for(it=adj[x].begin();it!=adj[x].end();it++)
		{
			if(!visited[*it])
			st.insert(*it);
		}
		if(ans.size()>=n)
		break;
	}
	for(i=0;i<n;i++)
	cout<<ans[i]+1<<' ';
}