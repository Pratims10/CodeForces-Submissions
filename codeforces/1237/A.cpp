#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n],o=0,e=0,s=0;
	ll ans[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		if(abs(ar[i])%2==1)
		o++;
		else e++;
		if(ar[i]%2==0)
		ans[i]=ar[i]/2;
		else if(ar[i]%2==1)
		ans[i]=ar[i]/2;
		else if(ar[i]%2==-1)
		ans[i]=ar[i]/2-1;
		s+=ans[i];
	}
	for(i=0;i<n;i++)
	{
		if(s==0)
		break;
		if(s<0&&ar[i]%2==1)
		{
			ans[i]++;
			s++;
		}
		else if(s<0&&ar[i]%2==-1)
		{
			ans[i]++;
			s++;
		}
		else if(s>0&&ar[i]%2==1)
		{
			ans[i]--;
			s--;
		}
		else if(s>0&&ar[i]%2==-1)
		{
			ans[i]--;
			s--;
		}
	}
	for(i=0;i<n;i++)
	cout<<ans[i]<<endl;
}