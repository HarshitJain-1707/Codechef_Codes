#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,i,flag,flag2,c1,c2,c3;
	scanf("%d",&t);
	while(t--){
		flag=0;flag2=0;c1=0;c2=0,c3=0;
		char s1[501],s2[501];
		scanf("%s",s1);
		scanf("%s",s2);
		int al1[26],al2[26];
		for(i=0;i<26;i++)
		al1[i]=al2[i]=0;
		for(i=0;i<strlen(s1);i++)
		al1[s1[i]-97]++;
		for(i=0;i<strlen(s2);i++)
		al2[s2[i]-97]++;
		
		for(i=0;i<26;i++){
			if(al1[i]>1 && al2[i]==0){
			flag2=1;
			break;
			}
		}
		
		if(flag2==1)
		 printf("A\n");
		else{
			for(i=0;i<26;i++){
				if(al1[i]>0 && al2[i]>0)
				 c1++;
				 
				if(al2[i]>0)
				 c2++; 
				 
				if(al1[i]>0)
				 c3++; 
			}
			if(c1==c2 && c3>c2)
            printf("A\n");
            else
            printf("B\n");
		}
	}
	return 0;
}
