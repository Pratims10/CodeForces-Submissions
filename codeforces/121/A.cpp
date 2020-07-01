#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool chk(ll n)
{
	while(n>0)
	{
		if(n%10!=4 and n%10!=7) return false;
		n/=10;
	}
	return true;
}
int main()
{
	ll i,j,n,m,k,q,t,l,r;
	cin>>l>>r;
	vector<ll> v;
	for(i=0;i<=pow(3,10);i++)
	{
		string s;
		n=i;
		while(n>0)
		{
			s+=(char)(n%3+'0');
			n/=3;
		}
		ll x=0;
		for(auto q:s)
		{
			ll p;
			if(q=='0') p=0;
			else if(q=='1') p=4;
			else if(q=='2') p=7;
			x=x*10+p;
		}
		if(chk(x)) v.push_back(x);
	}
	sort(v.begin(),v.end());
	map<ll,ll> mp;
	for(auto x:v)
	if(x>0)
	mp[x]=1;
	v.clear();
	for(auto x:mp)
	v.push_back(x.first);
	n=v.size();
	i=0;
	ll ans=0;
	while(i<n and v[i]<l) i++;
	if(r<=v[i])
	{
		cout<<(r-l+1)*v[i];
		return 0;
	}
	while(i<n and r>=v[i])
	{
		ans+=(v[i]-l+1)*v[i];
		l=v[i]+1;
		i++;
	}
	i--;
	//cout<<ans<<' ';
	ans+=(r-v[i])*v[i+1];
	cout<<ans;
}