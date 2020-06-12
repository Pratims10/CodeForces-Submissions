#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gCD(ll arr[], ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
        result = __gcd(arr[i], result);
    return result;
}
int main()
{
	ll a,b,r,i,j,k;
	string s;
	ll l;
	ll n2,n;
	cin>>n>>n2;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll diff[n-1];
	for(i=0;i<n;i++)
		diff[i]=ar[i+1]-ar[i];
	ll x=gCD(diff,n-1);
	ll ar2[n2];
	for(i=0;i<n2;i++)
	cin>>ar2[i];
	bool flag=false;
	for(i=0;i<n2;i++)
	{
		if(x%ar2[i]==0)
		{
			cout<<"YES\n";
			flag=true;
			cout<<ar[0]<<' '<<i+1<<endl;
			break;
		}
	}
	if(flag==false)
	cout<<"NO\n";
}