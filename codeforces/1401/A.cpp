#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a;
		cin>>a>>k;
		ll ans=0;
		if(k>=a)
		cout<<k-a<<endl;
		else
		{
			if(k%2==0 and a%2==1)
			ans=1;
			else if(k%2==1 and a%2==0) ans=1;
			else ans=0;
			cout<<ans<<endl;
		}
	}
}