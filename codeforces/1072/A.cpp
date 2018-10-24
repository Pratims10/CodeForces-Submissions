#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll w,h,k;
	cin>>w>>h>>k;
	ll ans=0;
	while(k--)
	{
		ans+=2*(w+h);
		w-=4;
		h-=4;
		ans-=4;
	}
	cout<<ans;
}