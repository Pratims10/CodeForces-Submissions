#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll a=1,b=1,c=1,d=0,a1,b1,c1;
	for(i=2;i<=n;i++)
	{
		a1=((b%mod+c%mod)%mod+d%mod)%mod;
		b1=((a%mod+c%mod)%mod+d%mod)%mod;
		c1=((a%mod+b%mod)%mod+d%mod)%mod;
		d=((a%mod+b%mod)%mod+c%mod)%mod;
		a=a1;
		b=b1;
		c=c1;
	}
//	d=a+b+c;
	cout<<d%mod;
}