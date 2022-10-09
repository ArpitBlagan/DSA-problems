/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
const int N=2e5+1;
//C. Interesting Story
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<string>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
		int ans=0;
		for(char a='a';a<='e';a++){
			vector<int>b(n,0);
			for(int i=0;i<n;i++){
				for(auto it:arr[i]){
					if(it==a){b[i]++;}else{b[i]--;}
				}
			}
			sort(all(b));int cnt=0,all=0;
			for(int i=n-1;i>=0;i--){cnt+=b[i];if(cnt>0){all++;}else{break;}}
			ans=max(ans,all);
		}cout<<ans<<"\n"; 
	}
	return 0;
}