#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,n,k,s,i,temp,ans,flag,sall,ptr,maxf,maxb,fans;
	cin>>t;
	while(t--){
		s=0;temp=0;ans=0;flag=0;long int min=-1000000;sall=0;maxf=0;maxb=0;fans=0;
		cin>>n>>k;
		long long int arr[n];
		for(i=0;i<n;i++){
		cin>>arr[i];sall+=arr[i];}
		
		for(i=0;i<n;i++){
			if(arr[i]<0){
				flag=2;
				break;
			}
			else
			 s=s+arr[i];
		}
		if(flag!=2)
		 cout<<s*k<<endl;
		else{
			for(i=0;i<n;i++){
				if(arr[i]>0){
					flag=1;
					break;
				}
			}
			if(flag!=1){
				for(i=0;i<n;i++){
					if(arr[i]>min)
					 min=arr[i];
				}
				cout<<min<<endl;
			}
		} 
		
		if(flag==1)
		{
	
			long long int cums[n],cumsb[n];
         	for(i=0;i<n;i++){
         		cums[i]=cumsb[i]=0;
			 }
			 cums[0]=arr[0];
			 for(i=1;i<n;i++)
			  cums[i]=arr[i]+cums[i-1];
			  
			 for(i=0;i<n;i++){
			 	if(cums[i]>maxf)
			 	 maxf=cums[i];
			 }
			 
			 cumsb[n-1]=arr[n-1];
			 for(i=n-2;i>=0;i--)
			  cumsb[i]=arr[i]+cumsb[i+1]; 
			  
			  	 for(i=0;i<n;i++){
			 	if(cumsb[i]>maxb)
			 	 maxb=cumsb[i];
			 } 
			  
			  
			if(sall<0){
//			s=0;
//		vector <int> v;
//		for(i=0;i<n;i++){
//			if(arr[i]>=0)
//			 s+=arr[i];
//			else{
//			 v.push_back(s);
//			 s=0; 
//		   }
//		}
//		 v.push_back(s);
//		ans=v[0]+v[v.size()-1];
//		for(i=1;i<v.size()-1;i++){
//			if(v[i]>ans)
//			ans=v[i];
//		} 
        	long long int max_ending_here, max_so_far;
			    	max_ending_here=max_so_far=0;
			    	for(i=0;i<n;i++){
			    		max_ending_here+=arr[i];
			    		if(max_ending_here<0)
			    		 max_ending_here=0;
			    		if(max_ending_here>max_so_far)
						 max_so_far=max_ending_here;
					}

		fans=max(max_so_far,(maxf+maxb));
		cout<<fans<<endl;
      }
         if(sall>=0){
//			 ptr=0;
//			 for(i=0;i<n;i++){
//			 	if(cums[i]<0)
//			 	 ptr=i+1;
//			 }
              
			 if(k>=2){
			     ans=maxb+(k-2)*sall+maxf;
			     cout<<ans<<endl;}
			  if(k<2)
			    {
			    	long long int max_ending_here, max_so_far;
			    	max_ending_here=max_so_far=0;
			    	for(i=0;i<n;i++){
			    		max_ending_here+=arr[i];
			    		if(max_ending_here<0)
			    		 max_ending_here=0;
			    		if(max_ending_here>max_so_far)
						 max_so_far=max_ending_here;
					}
					cout<<max_so_far<<endl;
				  }  
		 }
	}
   }
	return 0;
}
