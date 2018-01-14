#include <iostream>
#include<stdio.h>
using namespace std;
int check(int a[],int n,bool status[]){
	int i,flag=0,mid;
	for(i=1;i<8;i++)
		status[i]=0;
	 mid=n/2;
	 for(i=0;i<=mid;i++)
	 status[a[i]]=1;
	 //cout<<mid<<endl;
	 if(n%2==0){
	    	for(i=0;i<mid;i++){
	    		if(a[mid-i-1]!=a[mid+i]){
	    			flag=1;
	    			break;
	    		}
	    	}
	    }
   
	    else{
	    	for(i=0;i<mid;i++){
	    		if(a[mid-i-1]!=a[mid+i+1]){
	    			flag=1;
	    			break;
	    		}
	    	}
	    }
	 //cout<<flag<<endl;
	 return flag;
}	 
int main() {
	// your code goes here
	int t;int n,i,flag2;
	scanf("%d",&t);
	while(t--){
	     flag2=0;bool status[8];
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	   
	    int temp=check(a,n,status); 
	    
	   
	    if(temp==1)
	    printf("no\n");
	    else{
	    	for(i=1;i<=7;i++){
	    	if(status[i]==0){
	    		flag2=1;
	    		break;
	    	}
	    }
	   // cout<<flag2<<endl;
	    if(flag2==1)
	    printf("no\n");
	    else
	    printf("yes\n");
	   }
    }
	return 0;
}
