#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	string s;
	cin>>n>>k>>s;
	ll ans=0,l=0,r=0;
	ll a=0,b=0;
	while(l<n&&r<n)
	{
		if(s[r]=='a')
		a++;
		else b++;
		if(min(a,b)<=k)
		{
			ans=max(ans,r-l+1);
			r++;
		}
		else
		{
			if(s[l]=='a')
			a--;
			else b--;
			l++;
			r++;
		}
	}
	//ans=max
	cout<<ans<<endl;
}