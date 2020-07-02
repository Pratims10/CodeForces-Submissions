#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	vector<ll> v;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
			{
				v.push_back(i);
			}
			else
			{
				v.push_back(i);
				v.push_back(n/i);
			}
		}
	}
	if(v.size()==0)
	cout<<n;
	else
	{
		ll gcd=v[0];
		for(auto x:v)
		gcd=__gcd(gcd,x);
		cout<<gcd<<endl;
	}
}