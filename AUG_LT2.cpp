#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;long long int n,k,ans,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		if(n==1){
			if(k==1)
			 cout<<"1"<<endl;
			else
			 cout<<"0"<<endl; 
		}
		else{
	    long long int x=pow(2,n-2);
	    long long int y=k % x;
	    long long int z=k%2;
	    if(z==0){
	    	if(k==y)
	    	 c=0;
	    	else if(k==(pow(2,n-1)+y))
	    	 c=1;
	    	else if(k==(pow(2,n-2)+y))
			 c=2;
			else
			 c=3;
			 
			ans=(y/2)*4 + c;   
		}
		else{
			if(k==y)
	    	 c=0;
	    	else if(k==(pow(2,n-1)+y))
	    	 c=1;
	    	else if(k==(pow(2,n-2)+y))
			 c=2;
			else
			 c=3;
			 
			ans=(x/2 + y/2)*4 + c;
		}
		cout<<ans<<endl;
      }
		
	}
}
