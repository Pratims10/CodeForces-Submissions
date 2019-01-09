#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,x,y,ans;
	cin>>n>>x>>y;
	int ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	int ctr=0;
	for(i=0;i<n;i++)
	if(ar[i]<=x)
	ctr++;
	if(x>y)
	ans=n;
	else //if(x==y)
	{
		if(ctr%2==0)
		ans=ctr/2;
		else ans=ctr/2+1;
	}
	cout<<ans<<endl;
}