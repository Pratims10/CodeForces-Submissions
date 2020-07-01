#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,n,m,k,q,t;
	cin>>n;
	ll l=1,r=n,p=1;
	for(i=1;i<=n;i++)
	{
		if(p==1)
		{
			cout<<l<<' ';
			l++;
		}
		else
		{
			cout<<r<<' ';
			r--;
		}
		p*=-1;
	}
}