#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,a,b,ans=0;
	cin>>a>>b;
	while(a>0&&b>0)
	{
		if(a==1&&b==1)
		break;
		if(a<b)
		{
			a++;
			b-=2;
		}
		else
		{
			b++;a-=2;
		}
		ans++;
	}
	cout<<ans<<endl;
}