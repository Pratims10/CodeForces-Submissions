#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		int a=0,b=0;
		for(i=0;i<n-1;i++)
		{
			if(s[i]=='1' and s[i+1]=='1')
			a++;
			else if(s[i]=='0' and s[i+1]=='0')
			b++;
		}
		a=max(a,b);
		cout<<a<<'\n';
	}
}