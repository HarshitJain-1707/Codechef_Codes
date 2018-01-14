#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll evenOddDiff[2000001];
ll cummulativeDiff[2000001];
ll result[2000001];

void computeDifference()
{
    for(int i=1;i<=2000000;i++)
    {
        int sumOdd=0,sumEven=0;
        for(int j=i;j>0;j/=10)
        {
            if((j%10)%2==1)
                sumOdd+=j%10;
            else
                sumEven+=j%10;
        }
    evenOddDiff[i]=abs(sumEven-sumOdd);
    }
}
void nextDifference()
{
    for(int i=2;i<=2000000;i++)
    {
        cummulativeDiff[i]=cummulativeDiff[i-1]+evenOddDiff[i];
    }
}
void result1()
{
    for(int i=2;i<=1000000;i++)
    result[i]=result[i-1] + evenOddDiff[2*i] + 2*(cummulativeDiff[2*i-1]-cummulativeDiff[i]);
}
int main() {
    evenOddDiff[0]=0;result[1]=2;cummulativeDiff[1]=1;
    computeDifference();
    nextDifference();
    //cout<<cummulativeDiff[2]<<endl;
    result1();
    //cout<<evenOddDiff[10]<<" is ";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<result[n]<<endl;
    }
	return 0;
}
