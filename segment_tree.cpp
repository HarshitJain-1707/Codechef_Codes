#include<bits/stdc++.h>
using namespace std;
//int tree[1000000],a[1000000],lazy[1000000];
void recurse(vector <int> v[],int i){
	for(int j=v[i][1];j<=v[i][2];j++){
		if(v[j][0]==1)
		  v[j][3]++;
		 else
		  recurse(v,j); 
	}
}
void build(int tree[],int a[],int node,int start,int end)
{
	if(start==end)
	 tree[node]=a[start];
	 
	else{
		int mid=(start+end)/2;
		build(tree,a,2*node,start,mid);
		build(tree,a,2*node+1,mid+1,end);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	} 
}
void updateRange(int lazy[],int tree[],int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] != 0)
    { 
        tree[node] += (end - start + 1) * lazy[node];    
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  
            lazy[node*2+1] += lazy[node];                
        }
        lazy[node] = 0;                                 
    }
    if(start > end or start > r or end < l)              
        return;
    if(start >= l and end <= r)
    {
        tree[node] += (end - start + 1) * val;
        if(start != end)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(lazy,tree,node*2, start, mid, l, r, val);       
    updateRange(lazy,tree,node*2 + 1, mid + 1, end, l, r, val);   
    tree[node] = min(tree[node*2],tree[node*2+1]);         
}
int main(){
	int t,n,m,a,b,c,i,j;
	scanf("%d",&t);
	while(t--){
	 scanf("%d%d",&n,&m);
	 int arr[n+1];int tree[2*n],lazy[2*n];
	 for(i=1;i<=n;i++){
	  arr[i]=0;lazy[2*i]=0;lazy[2*i-1]=0;}
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
    build(tree,arr,1,1,n);
		for(i=1;i<=m;i++){
			if(v[i][0]==1){
				updateRange(lazy,tree,1,1,n,v[i][1],v[i][2],v[i][3]);
			}
	      }
 
	  for(i=1;i<=(2*n-1);i++){
	  if(lazy[i]>0)
	  tree[i]+=lazy[i];
	  cout<<tree[i]<<" ";
    }
  } 
    return 0;
}
