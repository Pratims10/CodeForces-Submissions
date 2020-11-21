#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll g=ar[0];
	ll mx=ar[0];
	for(i=1;i<n;i++)
	{
		g=__gcd(g,ar[i]);
		mx=max(mx,ar[i]);
	}
	ll ctr=mx/g;
	ctr-=n;
	if(ctr%2==1)
	cout<<"Alice";
	else cout<<"Bob";
}