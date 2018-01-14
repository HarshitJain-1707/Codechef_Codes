#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,i,j,c1,c2;char c;
	cin>>t;
	while(t--){
	 cin>>n>>m;
	 c1=0;c2=0;
	for(i=0;i<n;i++){
 		for(j=0;j<m;j++){
	 			cin>>c;
	 			if((i+j)%2==0 && c=='G')
	 			c1=c1+3;
	 			if((i+j)%2==1 && c=='R')
	 			c1=c1+5;
	 			if((i+j)%2==0 && c=='R')
	 			c2=c2+5;
	 			if((i+j)%2==1 && c=='G')
	 			c2=c2+3;	
			 }
		 }
		 if(c1<=c2)
		  cout<<c1<<endl;
		 else
		  cout<<c2<<endl; 
	 }
	 return 0;
}
