/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e5+7;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
		vector<ll>arr(n+1);arr[0]=0;
		for(int i=1;i<=n;i++){cin>>arr[i];}
		vector<vector<ll>>dp(n+1,vector<ll>(61,0));
		for(int i=1;i<=n;i++){
			ll f=arr[i];
			for(int j=0;j<61;j++){
				dp[i][j]=f%2;f/=2;
			}
		}
		for(int i=0;i<61;i++){
			for(int j=1;j<=n;j++){
				dp[j][i]+=dp[j-1][i];
			}
		}
		while(q--){
			int k,a,b,c,d;cin>>k>>a>>b>>c>>d;
			ll s1=dp[b][k]-dp[a-1][k];
			ll un1=(b-a+1)-s1;
			ll s2=dp[d][k]-dp[c-1][k];
			ll un2=(d-c+1)-s2;
			cout<<(s1*un2)+(s2*un1)<<"\n";
		}
	}
	return 0;
}