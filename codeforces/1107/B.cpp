#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,n,k,ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ans=k;
		ans+=(n-1)*9;
		cout<<ans<<endl;
	}
}