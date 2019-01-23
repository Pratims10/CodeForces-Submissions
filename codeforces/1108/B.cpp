#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,ctr,a,b;
	cin>>n;
	int ar[n],freq[10005]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		freq[ar[i]]++;
	}
	sort(ar,ar+n);
	a=ar[n-1];
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		freq[i]--;
	}
	for(i=10004;i>=0;i--)
	if(freq[i]>0)
	{
		b=i;
		break;
	}
	cout<<a<<' '<<b<<endl;
}