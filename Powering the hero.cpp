/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=2e5+5;
//C1. Powering the Hero
//Question link:https://codeforces.com/contest/1800/problem/C1
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);priority_queue<int>pq;
		int i=0;ll ans=0;
		while(i<n){
			int val;cin>>val;
			if(val==0){
				if(pq.empty()==false){ans+=pq.top();pq.pop();}
			}
			else{
				pq.push(val);
			}i++;
		}cout<<ans<<"\n";
	}	
	return 0;
}