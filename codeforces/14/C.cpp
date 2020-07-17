#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
bool check(pair<ll,ll> a,pair<ll,ll> b)
{
	if(a.first==b.first || a.second==b.second)
	return false;
	else
	return true;
}
void func(pair<ll,ll> p,pair<ll,ll> q,pair<ll,ll> r,pair<ll,ll> s)
{
	ld a=(p.first+q.first)*1.0;
	a/=2.0;
	ld b=(p.second+q.second)*1.0;
	b/=2.0;
	ld c=(r.first+s.first)*1.0;
	c/=2.0;
	ld d=(r.second+s.second)*1.0;
	d/=2.0;
	if(a==c and b==d)
	cout<<"YES";
	else cout<<"NO";
}
int main()
{
	ll i,j,k,m,n,x1,y1,x2,y2;
	ll x=0,y=0;
	map<pair<ll,ll>,ll> mp;
	for(i=0;i<4;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		mp[{x1,y1}]++;
		mp[{x2,y2}]++;
		if(x1==x2)x++;
		else if(y1==y2) y++;
	}
	if(mp.size()!=4){
		cout<<"NO";
		return 0;
	}
	if(!(x==2 and y==2))
	{
		cout<<"NO";return 0;
	}
	vector<pair<ll,ll>> v;
	for(auto x:mp)
	{
		v.push_back(x.first);
		if(x.second!=2)
		{
			cout<<"NO";
			return 0;
		}
	}
	//cout<<v[0].first<<' '<<v[0].second<<endl;
	if(check(v[0],v[1]))
	{
		func(v[0],v[1],v[2],v[3]);
	}
	else if(check(v[0],v[2]))
	{
		func(v[0],v[2],v[1],v[3]);
	}
	else if(check(v[0],v[3]))
	{
		func(v[0],v[3],v[1],v[2]);
	}
	else cout<<"NO";
}