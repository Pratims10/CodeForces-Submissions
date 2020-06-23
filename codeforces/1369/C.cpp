#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		map<ll,ll> mp;
		ll ar[n],cnt[m];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			mp[ar[i]]++;
		}
		sort(ar,ar+n);
		for(i=0;i<m;i++)
		cin>>cnt[i];
		sort(cnt,cnt+m,srt);
		ll ans=0;
		ll l=0,r=n-1;
		for(i=0;i<m;i++)
		{
			ll ctr=1;
			vector<ll> v;
			while(ctr<=cnt[i]-1)
			{
				v.push_back(ar[l++]);
				ctr++;
			}
			v.push_back(ar[r--]);
			ans+=v[0]+v[v.size()-1];
		}
		ll ans1=ans;
		ans=0;
		ll sum=0;
		for(i=0;i<m;i++)
		sum+=cnt[i]-1;
		l=0,r=sum;
		for(i=0;i<m;i++)
		{
			ll ctr=1;
			vector<ll> v;
			while(ctr<=cnt[i]-1)
			{
				v.push_back(ar[l++]);
				ctr++;
			}
			v.push_back(ar[r++]);
			ans+=v[0]+v[v.size()-1];
		}
		cout<<max(ans,ans1)<<endl;
	}
}
/*
1
9 3
1 1 1 2 2 2 3 3 3
2 3 4
*/