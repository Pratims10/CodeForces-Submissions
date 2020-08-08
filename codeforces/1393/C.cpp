#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	/*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			mp[ar[i]]++;
		}
		ll mx=0;
		for(auto x:mp)
		mx=max(mx,x.second);
		ll ans=0,ctr=0;
		for(auto x:mp)
		if(x.second==mx)
		ctr++;
		for(auto x:mp)
		{
			if(x.second<mx)
			ans+=x.second;
		}
		ans/=mx-1;
		ans+=ctr-1;
		cout<<ans<<'\n';
	}
}