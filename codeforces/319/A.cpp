#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
ll power(ll x,ll y)
{
	if(y==0) return 1;
	ll q=power(x,y/2)%mod;
	q*=q;
	q%=mod;
	if(y%2==1) q*=x;
	q%=mod;
	return q;
}
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>s;
	n=s.length();
	ll ans=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			ans+=(power(2,i)*(power(2,n-1-i)*power(2,n-1-i)%mod))%mod;
			ans%=mod;
		}
	}
	cout<<ans;
}