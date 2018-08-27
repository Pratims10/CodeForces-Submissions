#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ai,aj,x,flag=0,y,n,m,i,j,mid;
	cin>>n>>m;
	char s[n][m+1];
	for(i=0;i<n;i++)
	scanf("%s",s[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(s[i][j]=='B')
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		break;
	}
	x=i;
	y=j;
	//cout<<x<<" "<<y;
	for(;j<m;j++)
	if(s[i][j]=='W')
	break;
	j--;
	aj=(y+j)/2;
	for(;i<n;i++)
	if(s[i][y]=='W')
	break;
	i--;
	ai=(x+i)/2;
	cout<<ai+1<<" "<<aj+1<<endl;
}