#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,n,a,b,c,two=0,three=0;
	cin>>n;
	ll ar[n-1];
	for(i=0;i<n-1;i++)
	cin>>ar[i];
	ll ctr=0,max=0;
	ll freq[n+1]={0};
	/*for(i=0;i<n+1;i++)
	freq[i]=0;*/
	ll ans[i];
	bool flag=true;
	ll neg=0,sum=0;
	for(i=0;i<n-1;i++)
	{
		sum+=ar[i];
		if(sum<0)
		{
			if(neg>sum)
			neg=sum;
		}
	}
	if(neg==0)
	ans[0]=1;
	else
	ans[0]=1-neg;
//	cout<<ans[0]<<endl;
	if(ans[0]>n)
	flag=false;
	else
	freq[ans[0]]++;
	for(i=1;i<n;i++)
	{
		ans[i]=ans[i-1]+ar[i-1];
		if(ans[i]<=n)
		freq[ans[i]]++;
		else
		flag=false;
	}
	for(i=1;i<=n;i++)
	{
		if(freq[i]!=1)
		flag=false;
	//	cout<<freq[i]<<' ';
	}
//	cout<<endl;
	if(flag)
	{
		for(i=0;i<n;i++)
		cout<<ans[i]<<' ';
		cout<<endl;
	}
	else
	cout<<-1<<endl;
}