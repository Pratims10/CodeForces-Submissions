#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n],b[m];
		map<ll,ll> mp;
		ll ans=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			mp[ar[i]]++;
		}
		for(i=0;i<m;i++)
		{
			cin>>b[i];
			if(mp[b[i]])
			ans++;
		}
		cout<<ans<<endl;
	}
}