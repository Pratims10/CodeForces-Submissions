#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll ctr,i,j,k,m,n;
	cin>>n;
	ctr=1;
	list<ll> adj[n];
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<n;j++)
			adj[j].push_back(ctr++);
		}
		else
		{
			for(j=n-1;j>=0;j--)
			adj[j].push_back(ctr++);
		}
	}
	for(i=0;i<n;i++)
	{
		list<ll>::iterator it;
		for(it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<<*it<<' ';
		}
		cout<<endl;
	}
}