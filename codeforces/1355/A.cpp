#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mindig(ll n)
{
	ll mn=9;
	while(n!=0)
	{
		ll r=n%10;
		mn=min(mn,r);
		n/=10;
	}
	return mn;
}
ll maxdig(ll n)
{
	ll mx=0;
	while(n!=0)
	{
		ll r=n%10;
		mx=max(mx,r);
		n/=10;
	}
	return mx;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll ctr=1,ans=a;
		while(mindig(ans)!=0)
		{
			if(ctr==b) break;
			ans+=mindig(ans)*maxdig(ans);
			ctr++;
		}
		cout<<ans<<endl;
	}
}