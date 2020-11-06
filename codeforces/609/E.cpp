#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef struct edge{
	ll x,y,wt;
};
list<pair<ll,ll>> adj[200001];
ll dp[200001][20];
ll p[200001][20];
ll lvl[200001];
ll n,m;
bool srt(edge x,edge y)
{
	return x.wt<y.wt;
}
ll root (ll ar[],ll i)
{
	ll j=i;
    while(ar[i]!=i)
    { 
		i=ar[i]; 
    }
    ar[j]=i;
	return i;
}
void join(ll ar[ ],ll size[ ],ll A,ll B)
{
    ll root_A=root(ar,A);
    ll root_B=root(ar,B);
    if(root_A==root_B)
    return;
    if(size[root_A] < size[root_B])
    {
		ar[root_A]=ar[root_B];
		size[root_B]+=size[root_A];
	}
    else
    {
		ar[root_B]=ar[root_A];
		size[root_A]+=size[root_B];
	}
}
ll lca(ll x,ll y)
{
	if(lvl[x]<lvl[y])
	swap(x,y);
	for(ll i=20;i>=0;i--)
	{
		if(lvl[x]-(1ll<<i)>=lvl[y])
		x=p[x][i];
	}
	if(x==y)
	return x;
	for(ll i=19;i>=0;i--)
	{
		if(p[x][i]!=p[y][i])
		x=p[x][i],y=p[y][i];
	}
	return p[x][0];
}

ll path(ll x,ll len)
{
	ll mx=0;
	for(ll i=20;i>=0;i--)
	{
		if(len>=(1ll<<i))
		{
			mx=max(mx,dp[x][i]);
			len-=(1ll<<i);
			x=p[x][i];
		}
	}
	return mx;
}

void dfs(ll x,ll par)
{
	p[x][0]=par;
	for(auto child:adj[x])
	{
		if(child.first==par) continue;
		lvl[child.first]=lvl[x]+1;
		dp[child.first][0]=child.second;
		dfs(child.first,x);
	}
}
int main()
{
	ll i,j,k,t,q;
	cin>>n>>m;
	map<pair<ll,ll>,ll> indexOf;
	edge e[m];
	for(i=0;i<m;i++)
	{
		cin>>e[i].x>>e[i].y>>e[i].wt;
		e[i].x--,e[i].y--;
		indexOf[{e[i].x,e[i].y}]=i;
	}
	sort(e,e+m,srt);
	ll ar[n],size[n],ans[m];
	for(i=0;i<n;i++)
	ar[i]=i,size[i]=1;
	for(i=0;i<m;i++)
	ans[i]=-1;
	ll ww=0;
	for(i=0;i<m;i++)
	{
		if(root(ar,e[i].x)==root(ar,e[i].y)) continue;
		join(ar,size,e[i].x,e[i].y);
		ww+=e[i].wt;
		adj[e[i].x].push_back({e[i].y,e[i].wt});
		adj[e[i].y].push_back({e[i].x,e[i].wt});
		ans[indexOf[{e[i].x,e[i].y}]]=1;
	}
	for(i=0;i<m;i++)
	{
		if(ans[i]==1)
		ans[i]=ww;
	}
	lvl[0]=0;
	dfs(0,0);
	
	for(i=1;i<20;i++)
	{
		for(j=0;j<n;j++)
		{
			p[j][i]=p[p[j][i-1]][i-1];
		}
	}
	for(i=1;i<20;i++)
	{
		for(j=0;j<n;j++)
		{
			dp[j][i]=max(dp[j][i-1],dp[p[j][i-1]][i-1]);
		}
	}
	for(i=0;i<m;i++)
	{
		if(ans[indexOf[{e[i].x,e[i].y}]]!=-1) continue;
		ll par=lca(e[i].x,e[i].y);
		ll mx=path(e[i].x,lvl[e[i].x]-lvl[par]);
		mx=max(mx,path(e[i].y,lvl[e[i].y]-lvl[par]));
		ans[indexOf[{e[i].x,e[i].y}]]=ww-mx+e[i].wt;
	}
	for(i=0;i<m;i++)
	cout<<ans[i]<<endl;
}