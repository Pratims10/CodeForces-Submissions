#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string revers(string str) 
{
	string s1;
	s1=str;
   int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(s1[i], s1[n - i - 1]);
        return s1;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll c[n];
	string s[n];
	for(i=0;i<n;i++)
	cin>>c[i];
	for(i=0;i<n;i++)
	cin>>s[i];
	ll ar[n][2];
	ar[0][0]=0;
	ar[0][1]=c[0];
	for(i=1;i<n;i++)
	{
		ar[i][0]=ar[i][1]=999999999999999;
	}
	for(i=1;i<n;i++)
	{
		string str=revers(s[i]);
		if(s[i]>=s[i-1])
			ar[i][0]=min(ar[i][0],ar[i-1][0]);
		if(str>=s[i-1])
			ar[i][1]=min(ar[i][1],ar[i-1][0]+c[i]);
		if(s[i]>=revers(s[i-1]))
			ar[i][0]=min(ar[i][0],ar[i-1][1]);
		if(str>=revers(s[i-1]))
			ar[i][1]=min(ar[i][1],ar[i-1][1]+c[i]);
	}
	ll ans=min(ar[n-1][0],ar[n-1][1]);
	if(ans>=999999999999999)
	ans=-1;
	cout<<ans;
}