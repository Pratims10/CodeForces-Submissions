#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		ll x=a,y=b;
		ll ctr=0,p=1;
		while(a<=n and b<=n)
		{
			if(a<b)
			{
				a+=b;
			}
			else b+=a;
			ctr++;
		}
		ll ans=ctr;
		
		cout<<ans<<endl;
	}
}