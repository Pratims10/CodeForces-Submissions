#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		ll x,y;
		x=b/a;
		y=x+1;
		ll cx=a-b%a;
		ll cy=b%a;
		ll ans=cx*x*x+cy*y*y;
		cout<<ans<<endl;
	}
}