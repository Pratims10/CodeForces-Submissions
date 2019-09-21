#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll l,i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	ll mx=-1;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		mx=max(ar[i],mx);
	}
	for(i=0;i<n;i++)
	{
		ar[i]=mx-ar[i];
	}
	ll g;
	sort(ar,ar+n);
	g=ar[1];
	for(i=1;i<n;i++)
	g=__gcd(g,ar[i]);
	ll ans=0;
	for(i=0;i<n;i++)
	ans+=ar[i]/g;
	cout<<ans<<' '<<g<<endl;
}