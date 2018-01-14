#include<iostream>
#include<stdio.h>
#include<utility>
#include<queue>
using namespace std;
int main()
{
	int t,m,n,i,j,c1,c2;long int x,y,s;
	scanf("%d",&t);
	while(t--){
		c1=0;c2=0;s=0;
		scanf("%d%d",&m,&n);
		long int can[m];
		for(i=0;i<m;i++)
		scanf("%ld",&can[i]);
		pair<long int,long int> info[n];
		for(i=0;i<n;i++){
			scanf("%ld%ld",&x,&y);
			info[i]=make_pair(x,y);
	   }
	   priority_queue <pair<long int,int> > p[m];
	   bool stc[n],sts[m];
	   
	   for(i=0;i<n;i++)
	    stc[i]=0;
	   for(i=0;i<m;i++)
	    sts[i]=0;
	   char tar[m][n];
	   for(i=0;i<m;i++)
	   scanf("%s",tar[i]);
	   
	   for(i=0;i<m;i++){
	   	for(j=0;j<n;j++){
	   		if(tar[i][j]=='1' && info[j].second>0 && info[j].first>=can[i]){
	   			p[i].push(make_pair(info[j].first,j));
			   }
		    }
		   if(!p[i].empty()){
		     info[p[i].top().second].second-=1;
		     stc[p[i].top().second]=1;
		     sts[i]=1;
		     s+=p[i].top().first;
		   }
	   }
		
		for(i=0;i<m;i++){
			if(sts[i]==1)
			c1++;
		}
	
		for(i=0;i<n;i++){
			if(stc[i]==1)
	       c2++;
		}
		cout<<c1<<" "<<s<<" "<<n-c2<<endl;
		
    }
				
			
	return 0;	
}
