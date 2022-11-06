/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e5+7;
long gcd(long long a,long long b){
	if(b==0){return a;}
	return gcd(b,a%b);
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;vector<int>arr(n);
	for(int i=0;i<n;i++){cin>>arr[i];}
	vector<long>v;
	for(int i=0;i<n;i++){
		int val=arr[i];long ans=1;
		for(int i=2;i<=val;i++){	
			ans=(ans*i)/gcd(i,ans);
		}
		v.push_back(ans);
	}
	for(auto it:v){cout<<it<<" ";}
	return 0;
}