#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int op(double a,double b)
{
	int i=1;
	while(true)
	{
		if(b*(i*1.0)==a)
		return 0;
		if(b*i>a)
		return 1;
		i++;
	}
}
int main()
{
	ll i,j,t,n=18,ang;
	double a,b,c;
	int ar[n]={1,2,3,4,5,6,9,10,12,15,18,20,30,36,45,60,90,180};
	bool flag=false;
	cin>>t;
	while(t--)
	{
		flag=false;
		cin>>ang;
		if(ang==179)
		{
			cout<<360<<endl;
			continue;
		}
		for(n=1;n<=180;n++)
		{
			float min=180.0/(n*1.0);
			if(op(ang*1.0,min)==0)
			{
				if(ang<=180-360/n)
				{
					cout<<n<<endl;
					flag=true;
					break;
				}
			}
		}
		if(flag==false)
		cout<<-1<<endl;
	}
}