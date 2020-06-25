#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n>>k;
	vector<ll> v(n+1);
	for(i=0;i<n;i++)
	cin>>v[i];
	v[n]=LLONG_MAX;
	ll ans=0,px=0;
	for(i=0;i<n;i++)
	{
		ll x=upper_bound(v.begin(),v.end(),v[i]+k)-v.begin();
		//cout<<x<<' '<<px<<endl;
		j=i;
		x--;
		ll q=px;
		ll la=x-i+1;
		ll lb=px-i+1;
		ll a=la*(la-1)*(la-2)/6;
		ll b=lb*(lb-1)*(lb-2)/6;
		if(x<=px) continue;
		else px=x;
		ans+=a-b;
	}
	//cout<<endl;
	cout<<ans;
}