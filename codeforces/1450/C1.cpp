#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll ctr[3]={0};
		cin>>n;
		string s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[i][j]=='X')
				ctr[(i+j)%3]++;
			}
		}
		ll mn=n*n+1,mnpos;
		for(i=0;i<3;i++)
		{
			if(mn>ctr[i])
			{
				mn=ctr[i];
				mnpos=i;
			}
			//cout<<ctr[i]<<' ';
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			if((i+j)%3==mnpos and s[i][j]=='X')
			s[i][j]='O';
			cout<<s[i]<<endl;
		}
	}
}