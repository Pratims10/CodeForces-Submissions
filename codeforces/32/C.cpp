#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,s;
	cin>>n>>m>>s;
	ll x=ceil((n*1.0)/(s*1.0));
	ll y=ceil((m*1.0)/(s*1.0));
	ll ans=x*y;
	ll p=0,q=0;
	while(p<n)
	{
		p+=s;
	}
	p-=s;
	while(q<m)
	q+=s;
	q-=s;
	//cout<<ans<<' ';
	cout<<ans*(n-p)*(m-q);
}