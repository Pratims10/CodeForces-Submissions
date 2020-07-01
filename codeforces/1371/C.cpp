#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c,v;
	cin>>t;
	while(t--)
	{
		cin>>v>>c>>n>>m;
		if(v+c<n+m)
		cout<<"No\n";
		else
		{
			ll x=min(n,m);
			v-=x;
			c-=x;
			n-=x;
			m-=x;
			if(v<0 or c<0) cout<<"No\n";
//			cout<<v<<' '<<c<<' '<<n<<' '<<m<<endl;
			else if(n>0) cout<<"Yes\n";
			else
			{
				ll y=min(v,c);
				if(m<=y)
				cout<<"Yes\n";
				else cout<<"No\n";
			}
		}
	}
}