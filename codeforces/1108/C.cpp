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
	int ar[6];
	a=ar[0]=func(s,n,'R','G','B');
	b=ar[1]=func(s,n,'R','B','G');
	c=ar[2]=func(s,n,'G','R','B');
	d=ar[3]=func(s,n,'G','B','R');
	e=ar[4]=func(s,n,'B','G','R');
	f=ar[5]=func(s,n,'B','R','G');
//	for(i=0;i<6;i++)
//	ar[i][1]=i+1;
	int minpos=0,min=n+1;
	for(i=0;i<6;i++)
	{
		//cout<<ar[i]<<' ';
		if(min>ar[i])
		{
			min=ar[i];
			minpos=i;
		}
	}
	minpos++;
	cout<<min<<endl;
	if(minpos==1)
	{
		for(i=1;i<=n;i++)
		{
			if(i%3==1)
			cout<<'R';
			else if(i%3==2)
			cout<<'G';
			else
			cout<<'B';
		}
	}
	else if(minpos==2)
	{
		for(i=1;i<=n;i++)
		{
			if(i%3==1)
			cout<<'R';
			else if(i%3==2)
			cout<<'B';
			else
			cout<<'G';
		}
	}
	else if(minpos==3)
	{
		for(i=1;i<=n;i++)
		{
			if(i%3==1)
			cout<<'G';
			else if(i%3==2)
			cout<<'R';
			else
			cout<<'B';
		}
	}
	else if(minpos==4)
	{
		for(i=1;i<=n;i++)
		{
			if(i%3==1)
			cout<<'G';
			else if(i%3==2)
			cout<<'B';
			else
			cout<<'R';
		}
	}
	else if(minpos==5)
	{
		for(i=1;i<=n;i++)
		{
			if(i%3==1)
			cout<<'B';
			else if(i%3==2)
			cout<<'G';
			else
			cout<<'R';
		}
	}
	else if(minpos==6)
	{
		for(i=1;i<=n;i++)
		{
			if(i%3==1)
			cout<<'B';
			else if(i%3==2)
			cout<<'R';
			else
			cout<<'G';
		}
	}
	cout<<endl;
}