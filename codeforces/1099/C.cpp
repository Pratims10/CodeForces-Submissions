#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,Min,Max;
	string str;
	cin>>str;
	cin>>k;
	ll l=str.length(),s=0,c=0,a=0;
	for(i=0;i<l;i++)
	{
		if(str[i]=='*')
		s++;
		else if(str[i]=='?')
		c++;
		else a++;
	}
	Min=a-s-c;
	if(k<Min)
	{
		cout<<"Impossible\n";
		return 0;
	}
	if(k>a && s==0)
	{
		cout<<"Impossible\n";
		return 0;
	}
	if(k<=a)
	{
		ll diff=a-k;
		//cout<<diff<<endl;
		for(i=0;i<l;i++)
		{
			if((str[i+1]=='*'||str[i+1]=='?')&&diff>0&&(i+1)!=l)
			{
				diff--;
				i++;
			}
			else 
			{
				if(str[i]!='*'&&str[i]!='?')
				cout<<str[i];
				//else cout<<"  ";
			}
		}
		cout<<endl;
	}
	else
	{bool flag=false;
		for(i=0;i<l;i++)
		{
			
			ll diff=k-a;
		//	cout<<" "<<diff<<"\n";
			
			if(str[i+1]=='?')
			{
				if(str[i]!='?'&&str[i]!='*')
				cout<<str[i];
				i++;
			}
			if(str[i+1]!='*')
			{
				if(str[i]!='?'&&str[i]!='*')
				cout<<str[i];
			}
			else
			{
				if(flag==false)
				{
					for(j=0;j<=diff;j++)
					if(str[i]!='?'&&str[i]!='*')
					cout<<str[i];
					i++;
					flag=true;
				}
				else
				{
					if(str[i]!='?'&&str[i]!='*')
					cout<<str[i];
					i++;
				}
			}
		}
		cout<<endl;
	}
}