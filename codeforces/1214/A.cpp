#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d,e;
	ll ans=1000000000;
	cin>>n>>d>>e;
	e*=5;
	ll a=n;
	for(i=0;i<=n/d;i++)
	{
		a-=i*d;
		a%=e;
		ans=min(ans,a);
		a=n;
	}
	cout<<ans<<endl;
}