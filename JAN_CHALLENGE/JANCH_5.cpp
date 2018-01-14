#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,m,n,i,cnt;char ch;
	cin>>t;
	while(t--){
		cnt=0;
		cin>>m>>n;
		int A[27],B[27];
		for(i=1;i<27;i++)
		 A[i]=B[i]=0;
		for(i=1;i<=m;i++){
			cin>>ch;
			A[ch-96]++;
		} 
		for(i=1;i<=n;i++){
			cin>>ch;
			B[ch-96]++;
		}
		for(i=1;i<27;i++){
			if((A[i]+B[i])>1)
			 cnt=cnt+(A[i]+B[i]-1);
		}
		cout<<(m+n-cnt)<<endl;
	}
	return 0;
}
