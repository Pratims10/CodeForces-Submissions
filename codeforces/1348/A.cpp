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
		ll ctr=2,s=0;
		vector<ll> v;
		for(i=0;i<n;i++)
		{
			v.push_back(ctr);
			s+=ctr;
			ctr*=2;
		}
		ll ans=v[v.size()-1];
		for(i=0;i<n/2-1;i++)
		{
			ans+=v[i];
		}
		ll a=s-ans;
		cout<<abs(ans-a)<<endl;
	}
}