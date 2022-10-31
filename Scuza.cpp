/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//E. Scuza Codeforces.
//PrefixSum and PrefixMax.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,q;cin>>n>>q;
		vector<int>premax;vector<ll>pre;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			if(i==0){
				pre.push_back(a);
				premax.push_back(a);
			}
			else{
				pre.push_back(pre.back()+a);
				premax.push_back(max(a,premax.back()));
			}
		}
		while(q--){
			int h;cin>>h;
			int f=upper_bound(all(premax),h)-premax.begin();
			if(f==0){cout<<0<<" ";}
			else{cout<<pre[f-1]<<" ";}
		}cout<<"\n";
	}
	return 0;
}