#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,n,m,k;
	cin>>n;
	ll ar[n+1],ans=0;
	ar[0]=0;
	for(i=1;i<=n;i++)
	{
		ar[i]=ar[i-1]^i;
	}
	for(i=1;i<=n;i++)
	{
		ll x=n/i;
		if(x%2==1)
		{
			ans^=ar[i-1]^ar[n%i];
		}
		else ans^=ar[n%i];
	}
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		ans^=ar[i];
	}
	cout<<ans;
}