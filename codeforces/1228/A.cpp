#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,x,l,r;
	cin>>l>>r;
	bool f2=false;
	for(i=l;i<=r;i++)
	{
		bool flag=true;
		ll x=i;
		ll f[10]={0};
		while(x!=0)
		{
			ll r=x%10;
			f[r]++;
			x/=10;
			if(f[r]>1)
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<i;
			f2=true;
			break;
		}
	}
	if(!f2)
	cout<<-1;
}