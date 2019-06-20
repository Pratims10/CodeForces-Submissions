#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,c,mx,n,m,i,j,k;
	cin>>n;
	a=0;
	for(i=3;i<=n;i++)
	{
		a+=i*(i-1);
	}
	cout<<a;
}