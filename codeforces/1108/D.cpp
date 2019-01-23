#include<bits/stdc++.h>
using namespace std;
int func(string s,int n,char a,char b,char c)
{
	int ctr=0;
	for(int i=0;i<n;i+=3)
	{
		if(s[i]!=a)
		ctr++;
	}
	for(int i=1;i<n;i+=3)
	{
		if(s[i]!=b)
		ctr++;
	}
	for(int i=2;i<n;i+=3)
	{
		if(s[i]!=c)
		ctr++;
	}
	return ctr;
}
int main()
{
	int n,i,j,k,ctr,a,b,c,d,e,f;
	cin>>n;
	string s;
	cin>>s;
	if(n==1)
	{
		cout<<0<<endl<<s<<endl;
		return 0;
	}
	/*if(n==2)
	{
		if(s[0]==s[1])
		{
			if(s[0]=='R')
			s[0]='B';
			else
			s[0]='R';
		}
	}
	ctr=0;
	if(s[0]==s[1])
	{
		if(s[1]!=s[2])
		if(s[1]=='R')
		s[0]='G';
		else
		s[0]='R';
		ctr++;
	}*/
	ctr=0;
	for(i=0;i<n-2;i++)
	{
		if(s[i]==s[i+1])
		{
			if(s[i+2]=='R')
			{
				if(s[i+1]=='G')
				s[i+1]='B';
				else
				s[i+1]='G';
			}
			else if(s[i+2]=='G')
			{
				if(s[i+1]=='R')
				s[i+1]='B';
				else
				s[i+1]='R';
			}
			else
			{
				if(s[i+1]=='R')
				s[i+1]='G';
				else
				s[i+1]='R';
			}
			ctr++;
		}
	}
	if(s[n-1]==s[n-2])
	{
		if(s[n-1]=='R')
		s[n-1]='G';
		else
		s[n-1]='R';
		ctr++;
	}
	cout<<ctr<<endl;
	cout<<s<<endl;
}