#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	ll a,b,c;
	cin>>a>>b>>c;
	ll ans=min((a+b+c)/3,min(a,min(b,c)));
	ll x=ans;
	ll ar[3];
	ar[0]=a;
	ar[1]=b;
	ar[2]=c;
	a-=x,b-=x,c-=x;
	vector<ll> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(),v.end());
	if(v[1]!=0 and v[2]!=0)
	{
		ans+=min(v[1],min(v[2],(v[1]+v[2])/3));
	}
	//cout<<ans<<" ";
	sort(ar,ar+3);
	if(ar[2]>=2*(ar[1]+ar[0]))
	ans=max(ans,ar[1]+ar[0]);
	ans=max(ans,min(ar[2]/2,ar[0]+ar[1]));
	ll y=ar[2]/2;
	ar[0]-=y/2;
	ar[1]-=ceil((y*1.0)/2.0);
	if(ar[0]>0 and ar[1]>0)
	{
		ans=max(ans,y+min(ar[0],min(ar[1],(ar[0]+ar[1])/3)));
	}
	cout<<ans;
}