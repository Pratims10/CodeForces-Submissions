#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,j,ctr=0,max=-1;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	//scanf("%d",&ar[i]);
	cin>>ar[i];
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	for(i=0;i<n-1;i++)
	{
		ctr=0;
		j=i;
		while(ar[i]<=ar[i+1]&&i<n-1)
		{
			i++;
			ctr++;
		}
		if(max<ctr)
		{
			max=ctr;
			i--;
		}
	}
	//if(max>0)
	cout<<max+1;
	//else
	//cout<<max;
}