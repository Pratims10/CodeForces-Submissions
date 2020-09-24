#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll length(ll x)
{
	ll ctr=0;
	while(x>0)
	{
		x/=2;
		ctr++;
	}
	return ctr;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll ctr=0;
		ll f[100]={0};
		for(i=n-1;i>=0;i--)
		{
			ll len=length(ar[i]);
			ctr+=f[len];
			f[len]++;
		}
		cout<<ctr<<endl;
	}
}