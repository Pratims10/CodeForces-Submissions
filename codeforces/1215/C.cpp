#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,a1,a2,k1,k2,n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	ll c1=0,c2=0;
	vector<ll> x,y;
	for(i=0;i<n;i++)
	{
		if(s1[i]=='a'&&s2[i]=='b')
		{
			c1++;
			x.push_back(i+1);
		}
		else
		if(s1[i]=='b'&&s2[i]=='a')
		{
			c2++;
			y.push_back(i+1);
		}
	}
	if((c1+c2)%2==0)
	{
		if(c1%2==0&&c2%2==0)
		cout<<(c1+c2)/2<<endl;
		else
		{
			cout<<(c1+c2)/2+1<<endl<<x[c1-1]<<' '<<x[c1-1]<<endl;
			y.push_back(x[c1-1]);
			c2++;
			c1--;
		}
		for(i=0;i<c1;i+=2)
		cout<<x[i]<<' '<<x[i+1]<<endl;
		for(i=0;i<c2;i+=2)
		cout<<y[i]<<' '<<y[i+1]<<endl;
	}
	else
	cout<<-1;
}