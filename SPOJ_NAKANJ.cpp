#include<bits/stdc++.h>
using namespace std;
bool visited[9][9];
int dir[8][2],dis[9][9];
void initialize(){
	for(int i=1;i<=8;i++)
	 for(int j=1;j<=8;j++){
	  visited[i][j]=0;
	  dis[i][j]=0;
    }
}
int main(){
	int t,i;string s1,s2;int x1,x2,y1,y2,a,b,xn,yn,flag;
	scanf("%d",&t);
	dir[0][0]=-2; dir[0][1]=-1;
	dir[1][0]=-1; dir[1][1]=-2;
	dir[2][0]=1;  dir[2][1]=-2;
	dir[3][0]=2;  dir[3][1]=-1;
	dir[4][0]=2;  dir[4][1]=1;
	dir[5][0]=1;  dir[5][1]=2;
	dir[6][0]=-1; dir[6][1]=2;
	dir[7][0]=-2; dir[7][1]=1;
	
	while(t--){
		flag=0;initialize();
	 cin>>s1;
	 cin>>s2;
	 x1=9-(s1[1]-48);
	 y1=s1[0]-96;
	 x2=9-(s2[1]-48);
	 y2=s2[0]-96;

	 queue <pair<int,int> > q;
	 q.push(make_pair(x1,y1));
	 visited[x1][y1]=1;
	 dis[x1][y1]=0;
	 while(!q.empty()){
	 	a=q.front().first;
	 	b=q.front().second;
	 	q.pop();
	 	
	 	for(i=0;i<8;i++){
	 		xn=a+dir[i][0];
	 		yn=b+dir[i][1];
	 		
	 		if(visited[xn][yn]==0 && xn>=1 && yn>=1 && xn<=8 && yn<=8){
	 		 visited[xn][yn]=1;
	 		 dis[xn][yn]=dis[a][b]+1;
	 		 q.push(make_pair(xn,yn));
		 }
	 }
	 
	 if(visited[x2][y2]==1)
	 	break;
   }
   cout<<dis[x2][y2]<<endl;
 }
	return 0;
}
