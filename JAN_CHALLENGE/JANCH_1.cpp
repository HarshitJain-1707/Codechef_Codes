#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c,d,ct[4],cnt,cnt2;
	cin>>t;
	while(t--){
		cnt=0;cnt2=0;
		ct[0]=ct[1]=ct[2]=ct[3]=0;
		cin>>a;
		ct[0]=1;
		cin>>b;
		if(b==a)
		 ct[0]++;
		else
		 ct[1]++;
		cin>>c;
		if(c==a)
		 ct[0]++;
		else if(c==b)
		 ct[1]++;
		else
		 ct[2]++;
		cin>>d;
		if(d==a)
		 ct[0]++;
		else if(d==b)
		 ct[1]++;
		else if(d==c)
		 ct[2]++;
		else
		 ct[3]++;
		for(int i=0;i<4;i++){
			if(ct[i]==2)
			 cnt++;
			if(ct[i]==4)
			 cnt2++; 
		}
		if(cnt==2 || cnt2==1)
		 cout<<"YES"<<endl;
		else
		 cout<<"NO"<<endl;
	  }
	  return 0;       
	}
