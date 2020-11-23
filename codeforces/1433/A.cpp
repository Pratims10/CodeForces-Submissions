#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ans=((n%10)-1)*10;
		ll ctr=0;
		while(n!=0)
		{
			n/=10;
			ctr++;
		}
		ans+=ctr*(ctr+1)/2;
		cout<<ans<<'\n';
	}
}