#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,c,i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		ll ans;
		if(b<c/2)
		{
			ans=3*b;
			b=0;
		}
		else
		{
			ans=3*(c/2);
			b-=c/2;
		}
		if(a<b/2)
		{
			ans+=3*a;
		}
		else
		{
			ans+=3*(b/2);
		}
		cout<<ans<<endl;
	}
}