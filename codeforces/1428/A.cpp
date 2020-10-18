#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll ans=abs(c-a)+abs(d-b);
		if(a==c or d==b)
		{
			
		}
		else
		ans+=2;
		cout<<ans<<endl;
	}
}