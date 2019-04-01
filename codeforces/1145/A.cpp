#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ans=-1;
ll match(ll a[],ll b[],ll n)
{
	for(ll i=0;i<n;i++)
	if(b[i]!=a[i])
	return 0;
	return 1;
}
void check(ll ar[],ll l,ll r)
{
//	cout<<l<<' '<<r<<endl;
	ll i,j=l,k,ctr=0,n=r-l+1;
	if(n==1)
	{
		ans=max(ans,n);
	}
	ll b[n],c[n];
	for(i=0;i<n;i++)
	{
		b[i]=ar[j];
		c[i]=ar[j++];
	}
	sort(b,b+n);
	if(match(b,c,n))
	ans=max(ans,n);
	else
	{
	check(ar,l,(l+r)/2);
	check(ar,(l+r)/2+1,r);
	}
}
int main()
{
	ll a,b,n,i,j,k;
	cin>>n;
	ans=-1;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	check(ar,0,n-1);
	cout<<ans<<endl;//check(ar,0,n)<<endl;
}