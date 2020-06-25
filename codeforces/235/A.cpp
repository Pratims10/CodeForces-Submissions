#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll i,ll j,ll k)
{
	ll x=(i*j)/__gcd(i,j);
	x=(x*k)/__gcd(x,k);
	return x;
}
int main()
{
	ll i,j,k,m,n,x,t,a,b,c;
	cin>>n;
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	ll mx=n;
	for(i=1;i<=n;i++)
	{
		j=lcm(i,n,n-1);
		mx=max(mx,j);
	}
	for(i=1;i<=n;i++)
	{
		j=lcm(i,n-2,n-1);
		mx=max(mx,j);
	}
	
	cout<<mx;
}