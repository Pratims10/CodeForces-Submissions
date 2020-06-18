#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll f[64]={0};
	for(i=0;i<n;i++)
	{
		bitset<60> bs(ar[i]);
		for(j=0;j<60;j++) if(bs.test(j)) f[j]++;
	}
	vector<ll> v;
	while(true)
	{
		ll pow=1;
		ll x=0;
		bool flag=false;
		for(i=0;i<60;i++)
		{
			if(f[i])
			{
				f[i]--;
				flag=true;
				x+=pow;
			}
			pow*=2;
		}
		if(!flag) break;
		v.push_back(x);
	}
	ll ans=0;
	for(auto x:v) ans+=x*x;
	cout<<ans;
}