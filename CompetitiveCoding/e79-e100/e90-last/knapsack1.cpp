
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int wt[105],val[105];
int dp[105][100005];

int func(int ind,int wt_left){
	if(wt_left==0) return 0;
	if(ind<0) return 0;
	if(dp[ind][wt_left]!=-1) return dp[ind][wt_left];
	// Dont choose item at ind
	int ans=func(ind-1,wt_left);
	// Choose item ind
	if(wt_left-wt[ind]>=0)
	ans=max(ans,func(ind-1,wt_left-wt[ind])+val[ind]);
	return ans;
}

int main(){
	memset(dp,-1,sizeof(dp));
	int n,w;
	cin>>n>>w;
	for(int i=0;i<n;++i){
		cin>>wt[i]>>val[i];
	}
	cout<<func(n-1,w);
	return 0;
}