#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
	  scanf("%d",&n);
	  if(n%2==0){
	  	for(i=1;i<=n;i=i+2)
	  	cout<<i+1<<" "<<i<<" ";
	  	cout<<endl;
	  }	
	  else{
	  	for(i=1;i<=n-3;i=i+2)
	  	cout<<i+1<<" "<<i<<" ";
	  	cout<<n-1<<" "<<n<<" "<<n-2;
	  	cout<<endl;
	  	
	  }
	}
	return 0;
}
