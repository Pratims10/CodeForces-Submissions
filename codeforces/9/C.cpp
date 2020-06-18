#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	map<ll,ll> mp;
	for(i=0;i<=1024;i++)
	{
		bitset<11> bset(i);
		string s;
		for(j=0;j<=10;j++)
		if(bset.test(j)) s+='1';
		else s+='0';
		reverse(s.begin(),s.end());
		ll x=stoll(s);
		if(x<=n)
		{
			//cout<<x<<' '<<i<<endl;
			mp[x]++;
		}
	}
	cout<<mp.size()-1;
}