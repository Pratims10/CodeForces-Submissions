#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n][n];
	for(i=0;i<n;i++)
	{
		string str;
		cin>>str;
		for(j=0;j<n;j++)
		{
			if(str[j]=='1')
			ar[i][j]=1;
			else
			ar[i][j]=999999;
		}
	}
	cin>>m;
	ll arr[m];
	for(i=0;i<m;i++)
	{
		cin>>arr[i];
		arr[i]--;
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			if(ar[i][j]>ar[i][k]+ar[k][j])
			ar[i][j]=ar[i][k]+ar[k][j];
			ar[i][i]=0;
		}
	}
	
	ll ans[m];
	ll size=1;
	ans[0]=arr[0];
	ll pos=0;
	for(i=1;i<m;i++)
	{
		if(ar[ans[size-1]][arr[i]]!=i-pos)
		{
			ans[size++]=arr[i-1];
			pos=i-1;
			i--;
		}
	}
	if(ans[size-1]!=arr[m-1])
	ans[size++]=arr[m-1];
	cout<<size<<endl;
	for(i=0;i<size;i++)
	cout<<ans[i]+1<<' ';
}