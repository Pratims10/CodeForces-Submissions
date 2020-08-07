#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,n,m;
	vector<ll> v;
	ll ctr=2,ans=1;
	while(ans<=1e9)
	{
		ans+=ctr;
		ctr*=2;
		v.push_back(ans);
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll x=0;
		for(auto it:v)
		{
			if(n%it==0)
			{
				x=n/it;
				break;
			}
		}
		cout<<x<<'\n';
	}
}