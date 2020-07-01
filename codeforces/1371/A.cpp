#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		ll ans;
		cin>>n;
		if(n%2==1)
		ans=n/2+1;
		else ans=n/2;
		cout<<ans<<endl;
	}
}