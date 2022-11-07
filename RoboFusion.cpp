/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e5+7;
int dfs(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
	if(i>=j){return 0;}
	if(dp[i][j]!=-1){return dp[i][j];}
	int ans=INT_MAX;
	for(int ii=i;ii<=j-1;ii++){
		int val=dfs(i,ii,arr,dp)+dfs(ii+1,j,arr,dp)+arr[i-1]*arr[ii]*arr[j];
		ans=min(ans,val);
	}
	return dp[i][j]=ans;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;vector<pair<int,int>>arr;
	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;arr.push_back({a,b});
	}vector<int>vall;vall.push_back(arr[0].first);vall.push_back(arr[0].second);
	for(int i=1;i<n;i++){vall.push_back(arr[i].second);}
	vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
	cout<<dfs(1,n,vall,dp);
	return 0;
}