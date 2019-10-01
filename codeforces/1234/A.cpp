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
		ll s=0;
		for(i=0;i<n;i++)
		{
			cin>>j;
			s+=j;
		}
		if(s%n==0)
		cout<<s/n<<endl;
		else cout<<s/n+1<<endl;
	}
}