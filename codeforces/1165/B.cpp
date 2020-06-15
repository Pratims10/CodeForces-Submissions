#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,k,n;
	cin>>n;
	ll ar[n];
	ll f[200001]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		f[ar[i]]++;
	}
	ll ans=0;
	k=ans;
	for(i=1;i<200001;i++)
	{
		while(i<200001 and f[i]==0) i++;
		k++;
		if(i==200001) break;
		if(k<=i)
		{
			f[i]--;
			if(k<i)	i--;
			ans++;
		}
		else if(k>i) break;
	}
	cout<<ans<<endl;
}