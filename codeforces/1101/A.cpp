#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll q,l,r,d,ans;
	cin>>q;
	while(q--)
	{
		cin>>l>>r>>d;
		if(d<l)
		ans=d;
		else
		{
			ans=(r/d+1)*d;
		}
		cout<<ans<<endl;
	}
}