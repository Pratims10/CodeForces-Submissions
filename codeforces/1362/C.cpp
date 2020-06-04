#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll x)
{
	if(x<=1) return x;
	ll i,j=-1;
	for(i=2;i<63;i++)
	{
		ll q=(1<<i)-1;
		if(q==x)
		{
			j=i;
			break;
		}
	}
	if(j==-1)
	{
		ll pow=1;
		for(i=1;i<=63;i++)
		{
			if(x<pow) break;
			pow*=2;
		}
		pow/=2;
		//cout<<i<<"F"<<pow<<endl;
		return func(pow-1)+func(x%pow)+i-1;
	}
	ll a=x/2+1;
	
	return 2*func(a-1)+j;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=2*n-__builtin_popcountll(n);
		cout<<n<<endl;
	}
}