#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b;
	ll x=1;
	cin>>k>>b>>n>>t;
	if(k==1)
	{
		x=1+b*n;
		x=x-t;
		if(x<=0) x=0;
		else{
			if(x%b==0) x/=b;
			else x=x/b+1;
		}
		cout<<x;
		return 0;
	}
	long double q=((k-1+b)*1.0)/((t*k-t+b)*1.0);
	for(i=0;i<=1000000;i++)
	{
		if(powl(k,i-n)>=q)
		{
			cout<<i;
			return 0;
		}
	}
}