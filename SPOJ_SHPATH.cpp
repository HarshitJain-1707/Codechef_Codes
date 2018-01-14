#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
int min_dist(int dist[],bool visited[],int n){
	int min=20000,min_index;
	for(int i=1;i<=n;i++){
		if(dist[i]<=min && visited[i]==0){
			min=dist[i];min_index=i;
		}
	}
	return min_index;
}
int dijkstra(vector <pair<int,int> > v[],int n,int src,int end){
	int dist[n+1],i,j,u;bool visited[n+1];
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++)
	dist[i]=20000;
	dist[src]=0;

    for(i=1;i<=n;i++)
	{
        u=min_dist(dist,visited,n);
    	visited[u]=1;
    	if(u==end)
    	 break;
    	for(j=0;j<v[u].size();j++){
    		if(visited[v[u][j].first]==0 && dist[u]+v[u][j].second<dist[v[u][j].first])
    		dist[v[u][j].first]=dist[u]+v[u][j].second;
		}
	}
	return dist[u];
}
int main(){
	int t,n,m,i,j,x,y,a,k;string s,s1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		
		map<string, int> m1;
		
        vector <pair<int,int> > v[n+1];
         
		for(i=1;i<=n;i++){
			cin>>s;
	       	m1.insert(pair<string, int>(s,i));
			scanf("%d",&m);
			for(j=0;j<m;j++){
			scanf("%d%d",&x,&y);
	        v[i].push_back(make_pair(x,y));
		}
	}

	
	scanf("%d",&a);map <string, int> :: iterator itr1,itr2;
	for(i=0;i<a;i++){
		cin>>s>>s1;
		itr1=m1.find(s);
		itr2=m1.find(s1);
	    int ans=dijkstra(v,n,itr1->second,itr2->second);
	    printf("%d\n",ans);
	}
  }
  return 0;
}
