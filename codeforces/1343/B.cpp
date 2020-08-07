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
		if(n%4!=0)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		ll s=0;
		ll ctr=2;
		for(i=0;i<n/2;i++,ctr+=2)
		{
			cout<<ctr<<' ';
			s+=ctr;
		}
		ctr=1;
		ll s1=0;
		for(i=0;i<n/2-1;i++,ctr+=2)
		{
			cout<<ctr<<' ';
			s1+=ctr;
		}
		cout<<s-s1<<'\n';
	}
}