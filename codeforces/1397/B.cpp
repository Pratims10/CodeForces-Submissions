#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	ll mx=LLONG_MAX;
	for(i=1;i<=100000+1;i++)
	{
		long double x=log10(i);
		x*=(n*1.0-1.0);
		if(x>=18)
		break;
		ll ans=0;
		ll p=1;
		for(j=0;j<n;j++)
		{
			ans+=abs(p-ar[j]);
			if(j<n)
			p*=i;
		}
		mx=min(mx,ans);
	}
	cout<<mx;
}