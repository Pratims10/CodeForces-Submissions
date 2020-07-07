#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>m;
	ll b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(b,b+m);
	ll x=b[0];
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	ll ans=0;
	for(i=n-1;i>=0;)
	{
		ll ctr=0;
		while(i>=0 and ctr<x)
		{
			ctr++;
			ans+=ar[i--];
		}
		i-=2;
	}
	cout<<ans;
}