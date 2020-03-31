#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	bool flag;
	while(t--)
	{
		cin>>n;
		string s,s1,s2;
		cin>>s;
		flag=true;
		for(i=0;i<n;i++)
		{
			if(s[i]=='2')
			{
				if(!flag)
				{
				    s1+='0';
				    s2+='2';
				}
				else
				{
					s1+='1';
					s2+='1';
				}
			}
			else if(s[i]=='1')
			{
			    if(flag)
				{
					s1+='1';
					s2+='0';
					flag=false;
				}
				else
				{
					s1+='0';
					s2+='1';
				}
			}
			else if(s[i]=='0')
			{
				s1+='0';
				s2+='0';
			}
		}
		cout<<s1<<endl;
		cout<<s2<<endl;
	}
}