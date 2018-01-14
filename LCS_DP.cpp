#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;int i,j;
	cin>>s1;
	cin>>s2;
	int l1=s1.length();
	int l2=s2.length();
	int arr[l1+1][l2+1];
	for(i=0;i<=l1;i++)
	 arr[0][i]=0;
	for(i=0;i<=l2;i++)
	 arr[i][0]=0;
	 
	for(i=0;i<l1;i++){
		for(j=0;j<l2;j++){
			
		 if(s1[i]==s2[j])
		  arr[i+1][j+1]=arr[i][j]+1;
		 else
		  arr[i+1][j+1]=max(arr[i][j+1],arr[i+1][j]);
		}
	}
	cout<<arr[l1][l2]<<endl;
	return 0;  
}
