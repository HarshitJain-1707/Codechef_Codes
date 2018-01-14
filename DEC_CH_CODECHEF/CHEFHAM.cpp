#include<bits/stdc++.h>
using namespace std;
void swap(long long int *a,long long int *b)
{
	long long int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	long long int t,n,i,temp,j;
	cin>>t;
	while(t--){
	vector <long long int> v;
	cin>>n;
	long long int a[n],b[n];
	for(i=0;i<n;i++){
	 cin>>a[i];
	 b[i]=a[i];
    }
	if(n==1){
		cout<<"0"<<endl;
		cout<<a[0]<<endl;
	}
	else if(n>3){
		i=0;
		while(i<n-1){
			if(a[i]!=a[i+1]){
				 swap(&a[i],&a[i+1]);
				 i+=2;
			}
			else{
				v.push_back(i);
				i+=1;
			}
		}
	    if(i==n-1)
		   v.push_back(n-1);
		   
		
		if(v.size()%2==0 && v.size()>0){
		  if(a[v.size()-1]!=a[v.size()-2]){
		  	j=0;
		    while(j<(v.size()-1)){
			swap(&a[v[j]],&a[v[j+1]]);
			j=j+2;}
		  }
		  else{
		  	j=0;
		  	while(j<(v.size()-3)){
			swap(&a[v[j]],&a[v[j+1]]);
			j=j+2;}
			swap(&a[v.size()-1],&a[0]);
			swap(&a[v.size()-2],&a[1]);
		 }
	    }
	     else if(v.size()>0){
	     	j=0;
	     	while(j<(v.size()-1)){
	     		swap(&a[v[j]],&a[v[j+1]]);
			    j=j+2;
		}
		for(i=0;i<n;i++){
			if(a[v[v.size()-1]]!=b[i] && a[v[v.size()-1]]!=a[i]){
			swap(&a[v[v.size()-1]],&a[i]);break;}
		}
		
	   }
	   cout<<n<<endl;
	   for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
     }
     else if(n==2){
     	if(a[0]==a[1]){
     	 cout<<"0"<<endl;
     	 cout<<a[0]<<" "<<a[1]<<endl;}
     	else {
     		cout<<n<<endl;
     		cout<<a[1]<<" "<<a[0]<<endl;
		 }
	 }
	 else{
	 	if(a[0]!=a[1] && a[1]!=a[2] && a[0]!=a[2]){
	 		cout<<n<<endl;
	 		cout<<a[2]<<" "<<a[0]<<" "<<a[1]<<endl;
		 }
	    else if(a[0]==a[1] && a[1]==a[2]){
	 		cout<<"0"<<endl;
	 		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
		 }
		else if(a[1]==a[2]){
			cout<<"2"<<endl;
	 		cout<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
		} 
		else if(a[1]==a[0]){
			cout<<"2"<<endl;
	 		cout<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
		}
		else if(a[0]==a[2]){
			cout<<"2"<<endl;
	 		cout<<a[1]<<" "<<a[0]<<" "<<a[2]<<endl;
		}
	 }
     
   }

	return 0;
}
