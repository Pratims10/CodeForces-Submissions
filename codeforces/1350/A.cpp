#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ans;
		if(n%2==0)
		ans=n+k*2;
		else
		{
			bool f=false;
			for(i=2;i*i<=n;i++)
			if(n%i==0)
			{
				f=true;
				break;
			}
			if(f)
			ans=n+i;
			else ans=2*n;
			ans+=(k-1)*2;
		}
		cout<<ans<<endl;
	}
}