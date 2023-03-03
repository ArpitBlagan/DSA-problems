/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=2e5+5;
// B. Count the Number of Pairs
//Question link:https://codeforces.com/contest/1800/problem/B
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string str;cin>>str;
		unordered_map<char,int>mp;
		for(auto it:str){
			mp[it]++;
		}
		int ans=0;
		for(int i=0;i<26;i++){
			char f='a'+i,ff='A'+i;
			int s=mp[f],u=mp[ff];
			int mi=min(s,u);ans+=mi;
			s-=mi;u-=mi;
			if(s&&k){
				int vv=s/2,have=k;
				int vvv=min(have,vv);
				ans+=vvv;k-=vvv;
			}	
			if(u&&k){
				int vv=u/2,have=k;
				int vvv=min(have,vv);
				ans+=vvv;k-=vvv;			
			}
		}
		cout<<ans<<"\n";
	}	
	return 0;
}