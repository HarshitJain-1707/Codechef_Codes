#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i;
	scanf("%d",&t);
	while(t--){
		string s;
		int status[10];
		for(i=0;i<10;i++)
		status[i]=0;
		cin>>s;
		for(i=0;i<s.length();i++){
			status[s[i]-48]++;
		}
		if(status[6]>0){
			for(i=5;i<=9;i++){
				if(status[i]>0 && i!=6)
				 cout<<char(6*10+i);
				 if(i==6 && status[i]>1)
				  cout<<"B";
			}
		}
	
		if(status[7]>0){
			for(i=0;i<=9;i++){
				if(status[i]>0 && i!=7)
				 cout<<char(7*10+i);
				if(i==7 && status[i]>1)
				  cout<<"M";
			}
		}
		 
		if(status[8]>0){
			for(i=0;i<=9;i++){
				if(status[i]>0 && i!=8)
				 cout<<char(8*10+i);
				 if(i==8 && status[i]>1)
				  cout<<"X";
			}
		}
		if(status[9]>0 && status[0]>0)
		 cout<<char(9*10);
		cout<<endl; 
	}
	return 0;
}
