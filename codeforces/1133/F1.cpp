#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
int main()
{
	ll i,j,m,t,n,k;
	cin>>n>>m;
	ll ar[n],size[n];
	for(i=0;i<n;i++)
	{
		ar[i]=i;
		size[i]=1;
	}
	vector<pair<ll,ll>> edges;
	ll degree[n];
	memset(degree,0,sizeof(degree));
	for(i=0;i<m;i++)
	{
		ll u,v;
		cin>>u>>v;
		u--,v--;
		edges.push_back({u,v});
		degree[u]++;
		degree[v]++;
	}
	ll mx=-1,mxpos;
	for(i=0;i<n;i++)
	{
		if(mx<degree[i])
		{
			mx=degree[i];
			mxpos=i;
		}
	}
	for(i=0;i<m;i++)
	{
		if(edges[i].first==mxpos or edges[i].second==mxpos)
		{
			cout<<edges[i].first+1<<' '<<edges[i].second+1<<'\n';
			join(ar,size,edges[i].first,edges[i].second);
		}
	}
	for(i=0;i<m;i++)
	{
		if(root(ar,edges[i].first)!=root(ar,edges[i].second))
		{
			join(ar,size,edges[i].first,edges[i].second);
			cout<<edges[i].first+1<<' '<<edges[i].second+1<<'\n';
		}
	}
}