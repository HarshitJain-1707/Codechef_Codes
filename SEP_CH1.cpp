#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,index,i;long int sum,min;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
	    int a[n];long int s[n],p[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
			s[i]=sum;
		}
	/*	for(i=0;i<n;i++)
		cout<<s[i]<<" ";
		cout<<endl;*/
		sum=0;
		for(i=n-1;i>=0;i--){
			sum=sum+a[i];
			p[i]=sum;
		}
	/*	for(i=0;i<n;i++)
		cout<<p[i]<<" ";
		cout<<endl;*/
		min=p[0]+s[0];index=0;
		for(i=1;i<n;i++){
			if((p[i]+s[i])<min){
			 min=p[i]+s[i];
			 index=i;
		}
	  }
	  printf("%d\n",index+1);
   }
	return 0;
}
