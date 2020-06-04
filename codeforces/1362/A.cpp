#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll ans=0;
		if(a>b)
		swap(a,b);
		ll x=b/a;
		ll pow=1;
		bool fl=false;
		for(i=0;i<63;i++)
		{
			if(x==pow)
			{
				fl=true;
				break;
			}
			pow*=2;
		}
		if(b%a!=0 or !fl) cout<<-1<<endl;
		else
		{
			ans+=i/3;
			i%=3;
			ans+=i/2;
			i%=2;
			ans+=i;
			cout<<ans<<endl;
		}
	}
}