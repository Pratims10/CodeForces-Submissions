#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,x,t;
	cin>>n;
	ll ar[n];
	ll s=0,mx=0;
	for(i=0;i<n;i++)
	cin>>ar[i],s+=ar[i],mx=max(mx,ar[i]);
	ll ans=ceil((s*1.0)/(n*1.0-1.0));
	if(ans<mx)
	ans=mx;
	cout<<ans;
}