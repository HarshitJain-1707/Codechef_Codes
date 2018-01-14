#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	int t;long int n,d,i,s,t1,t2,flag,res,x,j;
	scanf("%d",&t);
	while(t--){
		s=0,flag=0,res=0;
		scanf("%ld%ld",&n,&d);
		vector <long int> arr[d];
		for(i=0;i<n;i++){
			scanf("%ld",&x);
			s=s+x;
			arr[i%d].push_back(x);
	    } 
		//cout<<s<<endl;  
	    t1=s%n;
		t2=s/n; 
		
		/*for(i=0;i<d;i++){
			for(j=0;j<arr[i].size();j++)
			cout<<arr[i][j]<<" ";
			cout<<endl;
		}*/
		
		if(t1!=0)
		printf("-1\n");
		
		else{
	     for(i=0;i<d;i++){
	    	s=0;
			for(j=0;j<arr[i].size();j++)
		    	s=s+arr[i][j];
		    	if((s%t2)!=0){
		    	flag=1;
		    	break;
		    	}
	     }
	     if(flag==1){
	     	printf("-1\n");
	     	continue;
		 }
		 else{
		 	for(i=0;i<d;i++){
		 	for(j=0;j<arr[i].size()-1;j++){
		 		arr[i][j+1]+=arr[i][j]-t2;
		 		res+=abs(arr[i][j]-t2);
			 }
	     }
	     printf("%ld\n",res);
	   }
   }
 }
   return 0;
}
