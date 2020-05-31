#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[1001];
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>n>>x;
		for(i=0;i<=n;i++) adj[i].clear();
		for(i=0;i<n-1;i++)
		{
			cin>>j>>k;
			j--,k--;
			adj[j].push_back(k);
			adj[k].push_back(j);
		}
		if(adj[x-1].size()<=1) {
			cout<<"Ayush\n";
			continue;
		}
		if(n%2) cout<<"Ashish\n";
		else cout<<"Ayush\n";
	}
}