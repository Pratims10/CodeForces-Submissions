#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll ans=1,s=0,n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s+=i;
		ans++;
		if(s>=n)
		break;
		s+=i;
		ans++;
		if(s>=n)
		break;
	}
	cout<<ans<<endl;
}