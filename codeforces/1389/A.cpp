#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		if(r<l*2)
		cout<<-1<<' '<<-1;
		else cout<<l<<' '<<2*l;
		cout<<'\n';
	}
}