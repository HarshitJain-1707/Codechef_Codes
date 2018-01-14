#include<bits/stdc++.h>
using namespace std;
int LCS(string s1,string s2,int l1,int l2){
	if(l1==0 || l2==0)
	 return 0;
	else if(s1[l1-1]==s2[l2-1])
	 return 1+LCS(s1,s2,l1-1,l2-1);
	else
	 return max(LCS(s1,s2,l1,l2-1),LCS(s1,s2,l1-1,l2));  
}
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int ans=LCS(s1,s2,s1.length(),s2.length());
	cout<<ans<<endl;
	return 0;
}
