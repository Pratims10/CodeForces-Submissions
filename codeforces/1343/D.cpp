#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void update(ll diff[],ll l,ll r)
{
	if(r<l) return;
	diff[l]+=1;
	diff[r+1]-=1;
}
int main()
{
	ll i,j,k,t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll diff[2*k+1]={0};
		for(i=0;i<n/2;i++)
		{
			ll a=min(ar[i],ar[n-1-i]);
			ll b=max(ar[i],ar[n-1-i]);
			mp[a+b]++;
			ll l=a+1;
			ll r=b+k;
			update(diff,l,a+b-1);
			update(diff,a+b+1,r);
		}
		for(i=1;i<=2*k;i++)
		diff[i]+=diff[i-1];
		ll ans=n;
		for(i=2;i<=2*k;i++)
		{
			ll ctr=mp[i]+diff[i];
			ans=min(ans,diff[i]+max(0ll,n-ctr*2));
			//cout<<diff[i]+max(0ll,n-ctr)*2<<' ';
		}
		//cout<<endl;
		cout<<ans<<endl;
	}
}