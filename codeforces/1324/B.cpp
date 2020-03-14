#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		bool flag=false;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i+2;j<n;j++)
			{
				if(ar[j]==ar[i])
				{
					flag=true;
					break;
				}
			}
		}
		if(flag)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}