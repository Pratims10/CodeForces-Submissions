
// Problem : B. Interesting Subarray
// Contest : Codeforces - Good Bye 2019
// URL : https://codeforces.com/contest/1270/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		bool flag=false;
		for(i=0;i<n-1;i++)
		{
			if(abs(ar[i+1]-ar[i])>=2)
			{
				flag=true;
				cout<<"YES\n";
				cout<<i+1<<' '<<i+2<<endl;
				break;
			}
		}
		if(!flag)
		cout<<"NO\n";
	}
}