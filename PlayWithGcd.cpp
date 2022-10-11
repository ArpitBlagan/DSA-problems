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
//B.Playing With Gcd.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
		bool ok=true;
		for(int i=1;i<=n-2;i++){
			if(arr[i]%(__gcd(arr[i-1],arr[i+1]))==0){
				continue;
			}else{ok=false;break;}
		}if(ok){cout<<"YES\n";}else{cout<<"NO\n";}
	}
	return 0;
}