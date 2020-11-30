#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			ll a=i*(i+1)/2;
			if(a>=n) break;
		}
		ll a=i*(i+1)/2;
		ll b=i*(i-1)/2;
		if(a==n)
		cout<<i<<endl;
		else
		{
			if(abs(a-n)==1)
			cout<<i+1;
			else cout<<i;
			cout<<endl;
		}
	}
}