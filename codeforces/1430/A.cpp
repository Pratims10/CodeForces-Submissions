#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void func(ll n)
{
	ll i,j,k;
	for(i=0;i<=n/3;i++)
	{
		for(j=0;j<=n/5;j++)
		{
			k=n-i*3-j*5;
			if(k>=0 and k%7==0)
			{
				k/=7;
				cout<<i<<' '<<j<<' '<<k<<endl;
				return;
			}
		}
	}
	cout<<"-1\n";
}
int main()
{
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		func(n);
	}
}