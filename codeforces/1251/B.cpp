#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ex=0,ans=0;
		ll q=0;
		for(i=0;i<n;i++)
		{
			string str;
			cin>>str;
			ll l=str.length();
			if(str.length()%2)	ex++;
			else
			{
				ll o,z;
				o=z=0;
				for(j=0;j<l;j++)
				{
					if(str[j]=='0')	z++;
					else o++;
				}
				if((o%2==0 and z%2==0))	ans++;
				else q++;
			}
		}
		if(q%2)
		{
			if(ex==0) cout<<n-1<<endl;
			else cout<<n<<endl;
		}
		else cout<<n<<endl;
	}
}