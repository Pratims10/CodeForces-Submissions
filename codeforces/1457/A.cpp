#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dist(ll x1,ll y1,ll x2,ll y2)
{
	return abs(x1-x2)+abs(y1-y2);
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll r,c;
		cin>>n>>m>>r>>c;
		ll ans=dist(1,m,r,c);
		ans=max(ans,dist(1,1,r,c));
		ans=max(ans,dist(n,1,r,c));
		ans=max(ans,dist(n,m,r,c));
		cout<<ans<<endl;
	}
}