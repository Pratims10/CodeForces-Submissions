#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,x;
	cin>>n>>m>>x;
	ll xx=x;
	ll a=999999999,b=-1;
	for(i=0;i<n;i++)
	{
		cin>>j;
		a=min(a,j);
	}
	k=(x/a);
	x%=a;
	for(i=0;i<m;i++)
	{
		cin>>j;
		b=max(b,j);
	}
	x=x+k*b;
	cout<<max(x,xx);
}