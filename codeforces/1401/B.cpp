#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll a1,ll b1,ll c1,ll a2,ll b2,ll c2)
{
	if(a1==0 and b1==0 and c1==0 and a2==0 and b2==0 and c2==0)
	return 0;
	ll ret=-1*INT_MAX;
	ll mn=min(a1,b2);
	if(mn>0)
	{
		ret=max(ret,func(a1-mn,b1,c1,a2,b2-mn,c2));
	}
	mn=min(a1,a2);
	if(mn>0)
	{
		ret=max(ret,func(a1-mn,b1,c1,a2-mn,b2,c2));
	}
	mn=min(a1,c2);
	if(mn>0)
	{
		ret=max(ret,func(a1-mn,b1,c1,a2,b2,c2-mn));
	}
	//b1
	mn=min(b1,b2);
	if(mn>0)
	{
		ret=max(ret,func(a1,b1-mn,c1,a2,b2-mn,c2));
	}
	mn=min(b1,a2);
	if(mn>0)
	{
		ret=max(ret,func(a1,b1-mn,c1,a2-mn,b2,c2));
	}
	mn=min(b1,c2);
	if(mn>0)
	{
		ret=max(ret,mn*(-2)+func(a1,b1-mn,c1,a2,b2,c2-mn));
	}
	//c1
	mn=min(c1,b2);
	if(mn>0)
	{
		ret=max(ret,2*mn+func(a1,b1,c1-mn,a2,b2-mn,c2));
	}
	mn=min(c1,a2);
	if(mn>0)
	{
		ret=max(ret,func(a1,b1,c1-mn,a2-mn,b2,c2));
	}
	mn=min(c1,c2);
	if(mn>0)
	{
		ret=max(ret,func(a1,b1,c1-mn,a2,b2,c2-mn));
	}
	return ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a1,b1,c1;
		ll a2,b2,c2;
		cin>>a1>>b1>>c1>>a2>>b2>>c2;
		ll ans=func(a1,b1,c1,a2,b2,c2);
		cout<<ans<<endl;
	}
}