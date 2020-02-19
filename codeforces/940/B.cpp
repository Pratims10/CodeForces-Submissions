//tanya
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,q,a,b;
	cin>>n>>k>>a>>b;
	j=0;
	ll ans=0;
	if(k==1)
	{
		cout<<(n-1)*a;
		return 0;
	}
	while(n!=1)
	{
		if(n%k==0)
		{
			q=n-n/k;
			ans+=min(q*a,b);
			n/=k;
		}
		else
		{
			q=n%k;
			ans+=q*a;
			n-=q;
			if(n==0)
			{
				ans-=a;
				break;
			}
		}
	}
	cout<<ans;
}