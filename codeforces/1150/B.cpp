#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,x;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	bool flag=true;
	for(i=0;i<n-2;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(s[i][j]=='.')
			{
				if(s[i+1][j]=='.' and s[i+2][j]=='.' and s[i+1][j-1]=='.' and s[i+1][j+1]=='.')
				{
				    s[i+1][j-1]='#';
					s[i+2][j]='#';
					s[i][j]='#';
					s[i+1][j]='#';
					s[i+1][j+1]='#';
				}
				else
				{
					flag=false;
					break;
				}
			}
		}
		if(flag==false)
		break;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i][j]=='.')
			{
			    cout<<"NO\n";
			    return 0;
			}
		}
	}
	cout<<"YES\n";
}