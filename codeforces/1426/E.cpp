#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll r1,ll s1,ll p1,ll r2,ll s2,ll p2,ll ctr)
{
	ll ans=INT_MAX;
	if(r1==0 and s1==0 and p1==0)
	return 0;
	if(r1!=0)
	{
		//cout<<r1<<' '<<s1<<' '<<p1<<' '<<r2<<' '<<s2<<' '<<p2<<endl;
		ll x=min(r1,r2);
		if(r2)
		ans=min(ans,func(r1-x,s1,p1,r2-x,s2,p2,ctr+1));
		x=min(r1,s2);
		if(s2)
		{
			ans=min(ans,x+func(r1-x,s1,p1,r2,s2-x,p2,ctr+1));
		}
		x=min(r1,p2);
		if(p2)
		ans=min(ans,func(r1-x,s1,p1,r2,s2,p2-x,ctr+1));
	}
	
	if(p1!=0)
	{
		ll x=min(p1,r2);
		if(r2)
		ans=min(ans,x+func(r1,s1,p1-x,r2-x,s2,p2,ctr+1));
		x=min(p1,s2);
		if(s2)
		ans=min(ans,func(r1,s1,p1-x,r2,s2-x,p2,ctr+1));
		x=min(p1,p2);
		if(p2)
		ans=min(ans,func(r1,s1,p1-x,r2,s2,p2-x,ctr+1));
	}
	if(s1!=0)
	{
		ll x=min(s1,r2);
		if(r2)
		ans=min(ans,func(r1,s1-x,p1,r2-x,s2,p2,ctr+1));
		x=min(s1,s2);
		if(s2)
		ans=min(ans,func(r1,s1-x,p1,r2,s2-x,p2,ctr+1));
		x=min(s1,p2);
		if(p2)
		ans=min(ans,x+func(r1,s1-x,p1,r2,s2,p2-x,ctr+1));
	}
	return ans;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll r1,s1,p1;
	ll r2,s2,p2;
	cin>>r1>>s1>>p1;
	cin>>r2>>s2>>p2;
	cout<<func(r1,s1,p1,r2,s2,p2,0)<<' ';
	cout<<min(r1,s2)+min(s1,p2)+min(p1,r2);
}
/*
19812
13963 5489 360
0 9805 10007
*/