//cosnt range
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll m,n,i,d,j,k;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll mn,mx;
	ll len,ans=1;
	for(i=0;i<n;)
	{
		mx=ar[i];
		mn=ar[i];
		len=1;
		bool flag=false;
		while(i<n-1)
		{
			i++;
			mn=min(mn,ar[i]);
			mx=max(mx,ar[i]);
			if(mx-mn>1)
			{
				flag=true;
				break;
			}
			else
			len++;
		}
		ans=max(ans,len);
		i--;
		while(ar[i]==ar[i-1])
		{
			i--;
		}
		if(i==n-1)
		break;
		if(!flag)
		break;
	}
	cout<<ans;
}