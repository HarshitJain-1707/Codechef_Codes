#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,j,sum,flag;
	cin>>t;
	while(t--){
	    flag=0;
	    sum=0;
		cin>>n;
		int s[n][n],ans[n];
		for(i=0;i<n;i++)
		 ans[i]=0;
		for(i=0;i<n;i++)
	     for(j=0;j<n;j++)
	    	cin>>s[i][j];
	    for(i=0;i<n;i++){
	        if(s[n-1][i]>ans[n-1])
	        ans[n-1]=s[n-1][i];
	    }	
	    for(i=n-2;i>=0;i--){	
	     for(j=0;j<n;j++){
	    	 if(ans[i]<s[i][j] && s[i][j]<ans[i+1])
	    	 ans[i]=s[i][j];
	     }
	    }
	    sum=ans[n-1];
	    for(i=0;i<n-1;i++){
	     if(ans[i]==0){
	         flag=1;
	         break;
	     }
	     else
	      sum=sum+ans[i];
	    }
	    if(flag==1)
	     cout<<"-1"<<endl;
	    else
	     cout<<sum<<endl;
	}    
    return 0;
}
