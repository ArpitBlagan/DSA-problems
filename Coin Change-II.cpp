/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n,s;cin>>n>>s;
	vector<ll>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
	ll dp[s+1];memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=1;j<=s;j++){
			if(j>=arr[i]){
				dp[j]+=dp[j-arr[i]];
				dp[j]%=mod;
			}
		}
	}cout<<dp[s]<<"\n";
	return 0;
}