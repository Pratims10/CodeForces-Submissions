#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k,ans;
	cin>>n;
	ll ar[n][2];
	for(i=0;i<n;i++)
	cin>>ar[i][0]>>ar[i][1];
	cin>>k;
	for(i=0;i<n;i++)
	if(k>=ar[i][0]&&k<=ar[i][1])
	{
		if(ar[i][1]!=k)
		ans=n-i;
		else
		ans=n-i;
		//cout<<i<<endl;
		break;
	}
	cout<<ans<<endl;
}