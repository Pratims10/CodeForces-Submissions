#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void bfs(list<ll> adj[],ll n,ll s,bool vis[],ll dis[])
{
	ll ctr=0;
	list<ll> q;
	q.push_back(s);
	vis[s]=true;
	dis[s]=0;
	while(!q.empty())
	{
		s=q.front();
		q.pop_front();
		list<ll>::iterator it;
		for(it=adj[s].begin();it!=adj[s].end();++it)
		{
			dis[*it]=min(dis[*it],dis[s]+1);
			if(!vis[*it])
			{
				vis[*it]=true;
				q.push_back(*it);
			}
		}
	}
}
int main()
{
	ll i,j,k,m,n,s,d;
	cin>>n>>m>>s>>d;
	s--;d--;
	ll ar[n][n]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		ar[i][j]=0;
	}
	list<ll> adj[n];
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		adj[j-1].push_back(k-1);
		adj[k-1].push_back(j-1);
		ar[j-1][k-1]=1;
		ar[k-1][j-1]=1;
	}
	bool vis[n];
	ll dis[n],dis2[n];
	for(i=0;i<n;i++)
	dis[i]=dis2[i]=10000000001;
	for(i=0;i<n;i++)
	vis[i]=false;
	bfs(adj,n,s,vis,dis);
	for(i=0;i<n;i++)
	vis[i]=false;
	bfs(adj,n,d,vis,dis2);
//	for(i=0;i<n;i++)
//	cout<<dis2[i]<<' ';
//	cout<<endl;
//	cout<<dis[d]<<' '<<dis2[s]<<endl;
	ll ans=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i!=j&&ar[i][j]==0&&(dis[i]+dis2[j]+1>=dis[d]&&dis2[i]+dis[j]+1>=dis[d]))
			{
		//		cout<<i+1<<' '<<j+1<<endl;
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}