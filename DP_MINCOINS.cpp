#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,i,j,temp,ans;
	cin>>m;
	int coins[m];
	for(i=0;i<m;i++)
	cin>>coins[i];
	int n;
	cin>>n;
	int table[n+1];
	table[0]=0;
	for(i=1;i<=n;i++)
	table[i]=INT_MAX;
	for(i=1;i<=n;i++){
		for(j=0;j<m;j++){
		if(coins[j]<=i){
			temp=table[i-coins[j]];
			if(table[i]==INT_MAX || temp+1<table[i])
			table[i]=temp+1;
		}
	}
  }
    for(i=0;i<=n;i++)
     cout<<table[i]<<" ";
     cout<<endl;
     cout<<table[n];
     return 0;
}
