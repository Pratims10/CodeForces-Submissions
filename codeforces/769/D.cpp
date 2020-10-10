#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,t;
	cin>>n>>k;
	ll ar[n];
	ll f[10001]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	ll ans=0;
	for(i=0;i<=10000;i++)
	{
		for(j=i;j<=10000;j++)
		{
			ll diff=__builtin_popcountll(i^j);
			if(diff==k)
			{
				if(i!=j)
				ans+=f[j]*f[i];
				else
				ans+=f[i]*(f[i]-1)/2;
			}
		}
	}
	cout<<ans;
}