#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,mid;
	string s;
	cin>>s;
	ll n=s.length();
	if(n%2==0)
	mid=n/2-1;
	else
	mid=n/2;
	cout<<s[mid];
	j=mid+1;
	k=mid-1;
	for(i=0;i<n-1;)
	{
		if(j<n)
		{
			i++;
			cout<<s[j];
			j++;
		}
		if(k>=0)
		{
			i++;
			cout<<s[k];
			k--;
		}
		//cout<<i<<endl;
	}
}