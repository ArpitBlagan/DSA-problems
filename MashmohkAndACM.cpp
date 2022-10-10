/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
ll dp[2001][2001];
//Given the range of number 1 to n and size of the sequnce we need find out the 
//sequnce such that the arr[i]%arr[i-1]==0 for all i from 0 to k-1.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;cin>>n>>k;
	dp[0][1]=1;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			for(int f=j;f<=n;f+=j){
				dp[i][f]+=dp[i-1][j];
				dp[i][f]%=mod;
			}
		}
	}
	ll ans=0;for(int i=1;i<=n;i++){
		ans+=dp[k][i];
	}cout<<ans%mod;
	return 0;
}