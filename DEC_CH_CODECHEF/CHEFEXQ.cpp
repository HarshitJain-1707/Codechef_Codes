#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,m,x,y,z,cnt,xorr;
	cin>>n>>m;
	int a[n+1],b[n+1];
	b[0]=0;
	for(i=1;i<=n;i++){
	cin>>a[i];
	b[i]=b[i-1]^a[i];
    }
    while(m--){
    	cin>>x>>y>>z;
    	if(x==1){
    		a[y]=z;
    		for(i=y;i<=n;i++)
    		b[i]=b[i-1]^a[i];
		}
		else{
			cnt=0;
			for(i=1;i<=y;i++){
				if(b[i]==z)
				cnt++;
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
	
}
