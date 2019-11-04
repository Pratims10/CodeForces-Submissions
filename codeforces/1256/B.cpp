#include<bits/stdc++.h>
using namespace std;
#define ll long long int
pair<ll,ll> func(ll ar[],ll l,ll n)
{
	ll mn=ar[l],minpos=l;
	for(ll i=l;i<n;i++)
	{
		if(mn>ar[i])
		{
			mn=ar[i];
			minpos=i;
		}
	}
	return {mn,minpos};
}
int main()
{
	ll i,j,k,m,n,t,a,b,s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll l,r;
		l=0;
		vector<ll> v;
		vector<ll> sw;
		for(i=0;i<n;)
		{
			l=i;
			pair<ll,ll> pr=func(ar,l,n);
			ll mn=pr.first;
			ll mnpos=pr.second;
			v.push_back(mn);
			for(j=l;j<=mnpos;j++)
			{
				if(ar[j]!=mn)
				v.push_back(ar[j]);
			}
			sw.push_back(mnpos);
			i=mnpos+1;
		}
		ll ans[n];
		for(i=0;i<n;i++)
		ans[i]=v[i];
		for(i=0;i<sw.size();i++)
		{
			if(sw[i]+1<n)
			{
				if(ans[sw[i]]>ans[sw[i]+1])
				swap(ans[sw[i]],ans[sw[i]+1]);
			}
		}
		for(i=0;i<n;i++)
		cout<<ans[i]<<' ';
		cout<<endl;
	}
}