#include<iostream>
using namespace std;
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n],lis[n],max;
	for(i=0;i<n;i++)
	 lis[i]=1;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=1;i<n;i++)
	 for(int j=0;j<i;j++)
	  if(a[i]>a[j] && lis[i]<lis[j]+1)
	  lis[i]=lis[j]+1;
	  
	  max=1;
	  
	 for(i=0;i<n;i++)
	 	if(lis[i]>max)
	 	 max=lis[i];
	 	 
	 cout<<max<<endl; 	 
	 return 0;
}
