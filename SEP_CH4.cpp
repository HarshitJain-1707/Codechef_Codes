#include<bits/stdc++.h>
using namespace std;
void recurse(vector <int> v[],int i){
	for(int j=v[i][1];j<=v[i][2];j++){
		if(v[j][0]==1)
		  v[j][3]++;
		 else
		  recurse(v,j); 
	}
}
int main(){
	int t,n,m,a,b,c,i,j;
	scanf("%d",&t);
	while(t--){
	 scanf("%d%d",&n,&m);
	 int arr[n+1];
	 for(i=1;i<=n;i++)
	  arr[i]=0;
	 vector <int> v[m+1];
	 for(i=1;i<=m;i++){
	 	cin>>a>>b>>c;
	 	if(a==1){
	 	v[i].push_back(a);
	 	v[i].push_back(b);
	 	v[i].push_back(c);
	 	v[i].push_back(1);
	    }
	 	else{
	 	v[i].push_back(a);
	 	v[i].push_back(b);
	 	v[i].push_back(c);
	 	recurse(v,i);
		}
    }
		/*for(i=1;i<=m;i++){
			if(v[i][0]==2)
			  recurse(v,i);
		}*/
		for(i=1;i<=m;i++){
			if(v[i][0]==1){
				for(j=v[i][1];j<=v[i][2];j++)
				 arr[j]+=v[i][3];
			}
	      }
 
	  for(i=1;i<=n;i++)
	   printf("%d ",arr[i]);
	   printf("\n");
    }
    return 0;
}
