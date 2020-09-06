#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		a=abs(a-b);
		double x=ceil((a*1.0)/10.0);
		a=x;
		cout<<a<<endl;
	}
}