#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k;
	cin>>n;
	char ans[2*n-2];
	for(i=0;i<2*n-2;i++)
	ans[i]='a';
	string s[2*n-2],str="1",s1="1",s2="1";
	for(i=0;i<2*n-2;i++)
	{
		cin>>s[i];
		if(s[i].length()==n-1)
		{
		//	cout<<"R ";
			if(s1=="1")
			s1=s[i];
			else
			s1=s1+s[i][n-2];
		}
	}
	for(i=2*n-3;i>=0;i--)
	{
		if(s[i].length()==n-1)
		{
		//	cout<<"R ";
			if(s2=="1")
			s2=s[i];
			else
			s2=s2+s[i][n-2];
		}
	}
	//cout<<s1<<' '<<s2<<endl;
	str=s1;
	for(i=0;i<2*n-2;i++)
	{
		ll l=s[i].length();
		bool flag=true,f2=false;
		for(j=0;j<2*n-2;j++)
		{
			if(s[i]==s[j]&&ans[j]!='a')
			{
				if(ans[j]=='P')
				ans[i]='S';
				else
				ans[i]='P';
				f2=true;
				break;
			}
		}
		if(f2==false)
		{
		for(j=0;j<l;j++)
		if(str[j]!=s[i][j])
		{
			flag=false;
			break;
		}
		if(flag)
		ans[i]='P';//cout<<'P';
		else
		ans[i]='S';
		}
	}
	bool flag=true;
	for(i=0;i<2*n-2;i++)
	{
		if(ans[i]=='P')
		{
			for(j=0;j<s[i].length();j++)
			{
				if(s[i][j]!=str[j])
				{
					//cout<<i<<' '<<'P'<<endl;
					flag=false;
				}
			}
		}
		else
		{
			ll l=s[i].length();
			ll ctr=str.length()-1;
			for(j=l-1;j>=0;j--)
			{
				if(s[i][j]!=str[ctr--])
				{
					//cout<<i<<' '<<'S'<<endl;
					flag=false;
				}
			}
		}
	}
	if(flag==false)
	{
		for(i=0;i<2*n-2;i++)
		ans[i]='a';
		//cout<<"D\n";
		str=s2;
		for(i=0;i<2*n-2;i++)
		{
		ll l=s[i].length();
		bool flag=true,f2=false;
		for(j=0;j<2*n-2;j++)
		{
			if(s[i]==s[j]&&ans[j]!='a')
			{
				if(ans[j]=='P')
				ans[i]='S';
				else
				ans[i]='P';
				f2=true;
				break;
			}
		}
		if(f2==false)
		{
		for(j=0;j<l;j++)
		if(str[j]!=s[i][j])
		{
			flag=false;
			break;
		}
		if(flag)
		ans[i]='P';//cout<<'P';
		else
		ans[i]='S';
		}
	}
	}
//	cout<<str<<endl;
	for(i=0;i<2*n-2;i++)
	cout<<ans[i];
}