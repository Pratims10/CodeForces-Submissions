//phys prac
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll x,l1,r1,i,j,k,m,n,q;
	cin>>n;
	ll a[100000];
	ll f[15005]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		f[a[i]]++;
	}
	for(i=1;i<=15000;i++)
		f[i]+=f[i-1];
	ll ans=9999999999;
	for(i=0;i<n;i++)
	{
		x=f[a[i]-1]+n-f[2*a[i]];
		ans=min(ans,x);
	}
	cout<<ans;
}