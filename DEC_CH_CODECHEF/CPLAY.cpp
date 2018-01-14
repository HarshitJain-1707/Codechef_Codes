#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;int i,flag,a,b;
	while(!cin.eof()){
    a=0;b=0;flag=0;
	cin>>s;
	for(i=0;i<10;i++)
	{
        if(i%2==0){
		if(s[i]=='1')a++;
		if(((a-b) > ((10-i)/2)) || ((b-a) > ((10-i)/2 - 1)))
		 break;
	    }   
		
		else{
		if(s[i]=='1')b++;
		if(((b-a) > ((10-i)/2)) || ((a-b) > ((10-i)/2)))
		 break;
		}
	}
	if(a>b)
	 cout<<"TEAM-A"<<" "<<i+1<<endl;
	else if(b>a)
	 cout<<"TEAM-B"<<" "<<i+1<<endl;
	else{
		for(i=10;i<20;i=i+2){
			if(s[i]=='1' && s[i+1]=='0'){
			 cout<<"TEAM-A"<<" "<<i+2<<endl;break;
		}
		else if(s[i+1]=='1' && s[i]=='0'){
		 cout<<"TEAM-B"<<" "<<i+2<<endl;break;
	    }
	    else
	     continue;
	}
	if(i==20)
	cout<<"TIE"<<endl; 
   }
  }
   	return 0;
}
