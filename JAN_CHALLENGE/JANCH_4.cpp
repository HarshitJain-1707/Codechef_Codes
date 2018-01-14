#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;long long int x,n,s,sum1,i;//long long int sum2;
	cin>>t;
	while(t--){
		cin>>x>>n;
		s=0;
		s=n*(n+1)/2 - x;

		if(n<=3)
		 cout<<"impossible"<<endl;
		else if(s%2==1)
		 cout<<"impossible"<<endl;
		else{
			vector <long long int> v;
			s=s/2;sum1=0;//sum2=0;
	
			for(i=n;i>=1;i--){
			    if(i==x)
				 v.push_back(2);
				else if(((sum1+i)<=s)){// && (s-sum1-i!=x)
				 v.push_back(1);
				 sum1=sum1+i;}
		        else{
//		        	sum2+= i;
				 v.push_back(0);  }
			}
			for(i=v.size()-1;i>=0;i--)
			 cout<<v[i];
			 cout<<endl;
//			 cout<<sum1<<" "<<sum2<<endl;
		}  
	}
	return 0;
}
