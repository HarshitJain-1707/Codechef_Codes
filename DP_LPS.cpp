#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;int n,i,j,k,maxlength=1,start=0,end=0;
	cin>>s;
	n=s.length();
	bool status[n][n];
	memset(status,0,sizeof(status));
	for(i=0;i<n;i++)
	 status[i][i]=true;
	for(i=0;i<n-1;i++){
	  if(s[i]==s[i+1])
	   status[i][i+1]=true;
	} 
	for(k=3;k<=n;k++){
		for(i=0;i<=n-k;i++){
			j=i+k-1;
		 if(status[i+1][j-1]==1 && s[i]==s[j]){
		   status[i][j]=1;
		   if(k>maxlength){
		   	 maxlength=k;
		   	 start=i;
		   	 end=i+k;
		   }	
		}
	}
  }
  cout<<maxlength<<endl;
  for(i=start;i<end;i++)
   cout<<s[i];
  return 0;
}

