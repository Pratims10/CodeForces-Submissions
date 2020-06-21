#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>k;
	if(n==1)
	{
		if(k==0) cout<<1;
		else cout<<-1;
		return 0;
	}
	ll y=n/2;
	if(k<y)
	cout<<-1;
	else
	{
		ll x=k-(n-2)/2;
		cout<<x<<' '<<2*x<<' ';
		ll ctr=2*x+1;
		for(i=2;i<n;i++) cout<<ctr++<<' ';
	}
}