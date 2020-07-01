#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		ll r;
		cin>>n>>r;
		ll ans=0;
		if(r<n)
		ans=r*(r+1)/2;
		else
		ans=n*(n-1)/2+1;
		cout<<ans<<endl;
	}
}