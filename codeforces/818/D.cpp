#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m;
	ll f[n]={0};
	ll ar[n];
	list<ll> adj[1000001];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		adj[ar[i]].push_back(i);
	}
	if(ar[0]==m) f[0]=1;
	for(i=1;i<n;i++)
	if(ar[i]==m) f[i]=f[i-1]+1;
	else f[i]=f[i-1];
	ll ans=-1;
	for(i=1;i<=1000000;i++)
	{
		if(i==m) continue;
		ll ctr=0;
		bool flag=true;
		for(auto x:adj[i])
		{
			if(ctr<f[x])
			{
				flag=false;
				break;
			}
			ctr++;
		}
		if(ctr<f[n-1]) flag=false;
		if(flag)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
}