#include<bits/stdc++.h>
using namespace std;
#define  ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t;
	char s[1000001];
	scanf("%s",s);
	n=strlen(s);
	ll v1[n],v2[n];
	ll a=0,b=0;
	for(i=0;i<n;i++)
	if(s[i]=='r') v1[a++]=(i+1);
	else v2[b++]=i+1;
	for(i=0;i<a;i++)
	printf("%d\n",v1[i]);
	for(i=b-1;i>=0;i--)
	printf("%d\n",v2[i]);
}