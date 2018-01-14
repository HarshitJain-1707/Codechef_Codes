#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,n,i,j;
	cin>>m>>n;
	int t;
	cin>>t;int x1,x2,x3,y1,y2,y3;
	while(t--){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
	  /*	pair <int,int> pos[4];
		pos[0]=make_pair(1,y1);
		pos[1]=make_pair(n,y1);
		pos[2]=make_pair(x1,1);
		pos[3]=make_pair(x1,m);*/
		int dis[3][4];
		dis[0][0]=abs(x1-1)+abs(y1-y1);
		dis[0][1]=abs(x1-n)+abs(y1-y1);
		dis[0][2]=abs(x1-x1)+abs(y1-1);
		dis[0][3]=abs(x1-x1)+abs(y1-m);
		dis[1][0]=abs(x2-1)+abs(y2-y1);
		dis[1][1]=abs(x2-n)+abs(y2-y1);
		dis[1][2]=abs(x2-x1)+abs(y2-1);
		dis[1][3]=abs(x2-x1)+abs(y2-m);
		dis[2][0]=abs(x3-1)+abs(y3-y1);
		dis[2][1]=abs(x3-n)+abs(y3-y1);
		dis[2][2]=abs(x3-x1)+abs(y3-1);
		dis[2][3]=abs(x3-x1)+abs(y3-m);	
		if((dis[0][0] < dis[1][0]  && dis[0][0] < dis[2][0]) || (dis[0][1] < dis[1][1]  && dis[0][1] < dis[2][1]) || (dis[0][2] < dis[1][2]  && dis[0][2] < dis[2][2]) || (dis[0][3] < dis[1][3]  && dis[0][3] < dis[2][3]) )
			cout<<"YES"<<endl;
		else
		    cout<<"NO"<<endl;	
		}
		
	return 0;
}
