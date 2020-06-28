#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		ll x=c%a;
		if(x>=b)
		cout<<c-(x-b)<<endl;
		else
		cout<<c+(b-x)-a<<endl;
	}
}