#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,n,a,b,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		ll ans=n*a+(n+1)*b;
		string str;
		cin>>str;
		bool flg=true;
		for(i=0;i<n;i++)
		if(str[i]=='1')
		flg=false;
		if(flg)
		{
			cout<<(n+1)*b+n*a<<endl;
			continue;
		}
		ll cf=0,cb=0;
		for(i=0;i<n;i++)
		if(str[i]=='0')
		cf++;
		else
		break;
		for(i=n-1;i>=0;i--)
		if(str[i]=='0')
		cb++;
		else
		break;
		ans+=b*(n+1-cf-cb)+2*a;
	//	if(2*a<b)
		{
			i=0;
			while(str[i]!='1')
			i++;
			for(;i<n;i++)
			{
				ll ctr=0;
				if(str[i]=='0')
				{
					while(i<n&&str[i]=='0')
					{
						i++;
						ctr++;
					}
					if(i!=n&&ctr>1&&(b*(ctr-1)-2*a)>0)
					ans-=b*(ctr-1)-2*a;
				}
			}
		}
		cout<<ans<<endl;
	}
}