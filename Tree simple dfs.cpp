/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Codeforces Round 875 (Div. 2), problem: (C) Copil Copac Draws Trees,
int dfs(int src,vector<int>adj[],int par){
	int res=0;int extra=1;
	for(auto it:adj[src]){
		if(it==par){extra=0;}
		else{
			res=max(res,dfs(it,adj,src)+extra);
		}
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<pair<int,int>>arr;
		vector<int>adj[n];
		for(int i=1;i<n;i++){
			int a,b;cin>>a>>b;a--;b--;
			adj[a].push_back(b);adj[b].push_back(a);
		}
		cout<<dfs(0,adj,-1)<<"\n";
	}
	return 0;
}