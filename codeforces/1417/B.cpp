#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		map<ll,ll> mp1,mp2;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		ll ans[n]={0};
		for(i=0;i<n;i++)
		{
			if(ar[i]>k)
			ans[i]=1;
			else
			{
				ll x=k-ar[i];
				if(mp1[x]<mp2[x])
				{
					mp1[ar[i]]++;
					ans[i]=1;
				}
				else
				{
					mp2[ar[i]]++;
					ans[i]=0;
				}
			}
		}
		for(i=0;i<n;i++)
		cout<<ans[i]<<' ';
		cout<<endl;
	}
}