#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srtbyfirst(pair<ll,ll> a,pair<ll,ll> b)
{
	return a.first<b.first;
}
ll small(vector<pair<ll,ll> > arr,ll n,ll key)
{
	ll left = 0, right = n;
    ll mid;
	while (left < right)
	{
        mid = (right + left) >> 1; 
        if (arr[mid].first == key)
		{
			while (mid + 1 < n && arr[mid + 1].first == key)
                mid++;
            break;
        }
        else if (arr[mid].first > key)
            right = mid;
        else
            left = mid + 1;
    }
    while (mid > -1 && arr[mid].first > key)
        mid--;
    return mid + 1;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	vector<pair<ll,ll> > v;
	ll f[1000000]={0};
	map<ll,ll> mp;
	ll N=0;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back({j,k});
		mp[j]=k;
		f[j]++;
		N=max(N,j);
	}
	ll dp[N+2]={0};
	if(f[0]==1)
	dp[0]=1;
	else dp[0]=0;
	for(i=1;i<=N+1;i++)
	{
		if(f[i]==0)
		dp[i]=dp[i-1];
		else
		{
			if(i-mp[i]-1>=0)
			dp[i]=dp[i-mp[i]-1]+1;
			else dp[i]=1;
		}
	}
	ll ans=0;
	for(i=0;i<n;i++)
	{
//		cout<<dp[i]<<' ';
		ans=max(ans,dp[v[i].first]);
	}
//	cout<<endl;
	cout<<n-ans<<endl;
}
/*
10
0 10
1 10
2 10
3 10
4 10
5 10
6 10
7 10
8 10
9 10
*/