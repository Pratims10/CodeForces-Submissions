#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll prev=a;
		while(b>0)
		{
			a=a/2+10;
			if(prev<a)
			{
				a=prev;
				break;
			}
			b--;
			prev=a;
		}
		while(c>0)
		{
			a-=10;
			c--;
		}
		if(a<=0)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}