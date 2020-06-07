#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			cin>>ar[i][j];
		}
		ll r=0,c=0;
		for(i=0;i<n;i++)
		{
			bool flag=true;
			for(j=0;j<m;j++)
			if(ar[i][j]) flag=false;
			if(flag) r++;
		}
		for(i=0;i<m;i++)
		{
			bool flag=true;
			for(j=0;j<n;j++)
			{
				if(ar[j][i]) flag=false;
			}
			if(flag) c++;
		}
		r=min(r,c);
		if(r%2==0) cout<<"Vivek\n";
		else cout<<"Ashish\n";
	}
}