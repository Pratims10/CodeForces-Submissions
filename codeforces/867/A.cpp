#include<bits/stdc++.h>
using namespace std;
int search(string s[],int size,string str)
{
	if(size==0)
	return -1;
	int i,pos=-1;
	for(i=0;i<size;i++)
	if(s[i]==str)
	{
		return i;
	}
	return -1;
}
int main()
{
	int n,i,j,k,ctr=0;
	string s;
	cin>>n>>s;
	for(i=0;i<n-1;i++)
	{
		if(s[i]=='S'&&s[i+1]=='F')
		ctr++;
		else if(s[i]=='F'&&s[i+1]=='S')
		ctr--;
	}
	//cout<<ctr<<endl;
	if(ctr>0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}