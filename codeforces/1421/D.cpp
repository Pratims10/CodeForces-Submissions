#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll x11,y11;
ll c1,c2,c3,c4,c5,c6;
ll func(ll x,ll y,ll mask)
{
	if(x==x11 and y==y11)
	return 0;
	ll ret=LLONG_MAX;
	//c2
	if(x11>x and (mask&(1ll<<2))==0)
	ret=min(ret,(x11-x)*c2+func(x11,y,mask|(1ll<<2)));
	//c5
	if(x11<x and (mask&(1ll<<5))==0)
	ret=min(ret,(x-x11)*c5+func(x11,y,mask|(1ll<<5)));
	//c3
	if(y11<y and (mask&(1ll<<3))==0)
	ret=min(ret,(y-y11)*c3+func(x,y11,mask|(1ll<<3)));
	//c6
	if(y<y11 and (mask&(1ll<<6))==0)
	ret=min(ret,(y11-y)*c6+func(x,y11,mask|(1ll<<6)));
	if(x11>x or y11>y)
	{
		if(x11>x and (mask&(1ll<<1))==0)
		ret=min(ret,c1*(x11-x)+func(x11,y+x11-x,mask|(1ll<<1)));
		if(y11>y and (mask&(1ll<<1))==0)
		ret=min(ret,c1*(y11-y)+func(x+y11-y,y11,mask|(1ll<<1)));
	}
	if(x11<x or y11<y)
	{
		if(x11<x and (mask&(1ll<<4))==0)
		ret=min(ret,c4*(x-x11)+func(x11,y-x+x11,mask|(1ll<<4)));
		if(y11<y and (mask&(1ll<<4))==0)
		ret=min(ret,c4*(y-y11)+func(x+y11-y,y11,mask|(1ll<<4)));
	}
	return ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>y11>>x11;
		cin>>c1>>c2>>c3>>c4>>c5>>c6;
		cout<<func(0,0,0)<<endl;
	}
}