#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k;
	cin>>n;
	ll in[n],de[n],incr=0,decr=0,ar[n];
	ll f[200001]={0};
	bool flag=true;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
		if(f[ar[i]]>2)
		flag=false;
	}
	if(flag==false)
	{
		cout<<"NO\n";
		return 0;
	}
	for(i=0;i<200001;i++)
	{
		if(f[i]==1)
		in[incr++]=i;
		else if(f[i]==2)
		{
			in[incr++]=i;
			de[decr++]=i;
		}
		else if(f[i]>=3)
		flag=false;
	}
	if(flag==false)
	{
		cout<<"NO\n";
		return 0;
	}
	else
	{
		sort(in,in+incr);
		sort(de,de+decr);
		cout<<"YES\n";
		cout<<incr<<endl;
		for(i=0;i<incr;i++)
		cout<<in[i]<<' ';
		cout<<endl;
		cout<<decr<<endl;
		for(i=decr-1;i>=0;i--)
		cout<<de[i]<<' ';
		cout<<endl;
	}
}