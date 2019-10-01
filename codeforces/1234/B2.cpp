#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool search(ll ar[],ll n,ll x)
{
	for(ll i=0;i<n;i++)
	if(ar[i]==x)
	return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll i,j,k,m,n,t;
	cin>>n>>k;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll size=0;
	ll arr[1000];
	deque<ll> dq;
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		if(mp[ar[i]])
		{
//			cout<<'c';
			continue;
		}
		if(size<k&&!mp[ar[i]])
		{
//			cout<<'a';
			mp[ar[i]]++;
			dq.push_front(ar[i]);
			size++;
		}
		else if(size==k)
		{
//			cout<<'b';
			mp[dq.back()]=0;
			dq.pop_back();
			dq.push_front(ar[i]);
			mp[ar[i]]++;
		}
	}
	cout<<size<<endl;
	deque <ll> :: iterator it;
    for (it = dq.begin(); it != dq.end(); ++it) 
        cout<<*it<<' ';
}