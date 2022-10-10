/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Given an array need find the length of longest subsequnce such that for 
//index in that sequnce it divide the another index ele in ori arrray and arr[i+1]>arr[i].
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n+1);int dp[n+1];
		for(int i=1;i<=n;i++){cin>>arr[i];dp[i]=1;}
		for(int i=1;i<=n;i++){
			for(int j=i+i;j<=n;j+=i){
				if(arr[j]>arr[i]){dp[j]=max(dp[i]+1,dp[j]);}
			}
		}
		int ans=0;for(int i=1;i<=n;i++){ans=max(ans,dp[i]);}cout<<ans<<"\n";
	}
	return 0;
}