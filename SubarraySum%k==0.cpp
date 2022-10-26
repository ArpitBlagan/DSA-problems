/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Given an integer array nums and an integer k, 
//return true if nums has a continuous subarray of size at least two whose 
//elements sum up to a multiple of k, or false
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;cin>>n>>k;vector<int>arr(n);
	for(int i=0;i<n;i++){cin>>arr[i];}bool ok=false;
	int pre=0;unordered_map<int,int>mp;for(int i=0;i<n;i++){
		pre+=arr[i];pre%=k;
		if(pre==0&&i){ok=true;break;}
		if(mp.find(pre)!=mp.end()){
			if(i-mp[pre]){ok=true;break;}
		}
		else{
			mp[pre]=i;
		}
	}if(ok){cout<<"YES\n";}else{cout<<"NO\n";}
	return 0;
}