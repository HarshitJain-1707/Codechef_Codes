#include<bits/stdc++.h>
using namespace std;
int maxm(int a,int b,int c){
	if(a>=b && a>=c)
	 return a;
	else if(b>=a && b>=c)
	 return b;
	else
	 return c;  
}
int value(int i,int j,int k,int a,int b,int c,int x,int y,int z){
	if(i>x)return 0;
	if(j>y)return 0;
	if(k>z)return 0;
	int cost=maxm(a,b,c);
	if(i>x && j>y && k>z) return cost;
	
    cost=min(cost,a+value(i+1,j,k,a,b,c,x,y,z));
    cost=min(cost,a+value(i,j+1,k,a,b,c,x,y,z));
    cost=min(cost,a+value(i,j,k+1,a,b,c,x,y,z));
    cost=min(cost,b+value(i+1,j+1,k,a,b,c,x,y,z));
    cost=min(cost,b+value(i+1,j,k+1,a,b,c,x,y,z));
    cost=min(cost,b+value(i,j+1,k+1,a,b,c,x,y,z));
    cost=min(cost,c+value(i+1,j+1,k+1,a,b,c,x,y,z));
}
int main(){
	int t,x,y,z,a,b,c;
	cin>>t;
	while(t--){
		cin>>x>>y>>z>>a>>b>>c;
		
		int result=value(0,0,0,a,b,c,x,y,z);
		cout<<result<<endl;
	}
	return 0;
}
