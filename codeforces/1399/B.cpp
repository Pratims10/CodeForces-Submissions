#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n],b[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		ll x=0,y=0;
		ll ans=0;
		ll mn=ar[0],mn2=b[0];
		for(i=0;i<n;i++)
		{
			mn=min(mn,ar[i]);
			mn2=min(mn2,b[i]);
		}
		for(i=0;i<n;i++)
		{
			x=ar[i]-mn;
			y=b[i]-mn2;
			ans+=max(x,y);
		}
		cout<<ans<<endl;
	}
}