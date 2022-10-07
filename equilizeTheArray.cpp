/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7,N=2*1e6;
//(F) Equalize the Array
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){map<int,int>mp,cnt;
		int n;cin>>n;int ans=INT_MAX;
		for(int i=0;i<n;i++){
			int a;cin>>a;mp[a]++;
			cnt[mp[a]]++;
			ans=min(ans,n-mp[a]*cnt[mp[a]]);
		}cout<<ans<<"\n";
	}
	return 0;
}