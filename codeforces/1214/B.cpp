#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d,e,b,g;
	ll ans=1000000000;
	cin>>b>>g>>n;
	ll ar[n+1][2];
	for(i=0;i<=n;i++)
	{
		ar[i][0]=i;
		ar[i][1]=n-i;
	}
	ans=0;
	for(i=0;i<=n;i++)
	{
//		cout<<ar[i][0]<<' '<<ar[i][1]<<endl;
		if(ar[i][0]<=b&&ar[i][1]<=g)
		ans++;
	}
	cout<<ans<<endl;
}