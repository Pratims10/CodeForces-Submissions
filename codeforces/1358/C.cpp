#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		n=x2-x1;
		m=y2-y1;
		cout<<n+m+(n-1)*(m-1)<<endl;
	}
}