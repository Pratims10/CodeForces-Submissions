#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,s,t;
	cin>>t;
	while(t--)
	{
		map<ll,ll> mp;
		cin>>n>>s>>k;
		ll ar[k];
		for(i=0;i<k;i++)
		{
			cin>>ar[i];
			mp[ar[i]]++;
		}
		//cout<<"S";
		ll ans=100000000000;
		ll l=max((ll)1,s-(ll)1001);
		for(i=s;i>=l;i--)
		{
			if(!mp[i])
			ans=min(ans,abs(s-i));
		}
	//	cout<<"D";
		l=min(s+1001,n);
		for(i=s+1;i<=l;i++)
		{
			if(!mp[i])
			ans=min(ans,abs(s-i));
		}
		cout<<ans<<endl;
	}
}