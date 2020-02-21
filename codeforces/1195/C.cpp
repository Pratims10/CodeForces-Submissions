#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll a[n],b[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];
	ll dp1[n],dp2[n];
	dp1[0]=a[0];
	dp2[0]=b[0];
	for(i=1;i<n;i++)
	{
		dp1[i]=max(dp1[i-1],dp2[i-1]+a[i]);
		dp2[i]=max(dp2[i-1],dp1[i-1]+b[i]);
	}
	cout<<max(dp1[n-1],dp2[n-1])<<endl;
}