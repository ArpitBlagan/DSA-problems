/*ॐ Arpit Blagan ॐ*/
/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Chef got Recipes..
//https://www.codechef.com/problems/JAIN?tab=statement
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>cnt(32,0);
		for(int i=0;i<n;i++){
			string str;cin>>str;
			int mask=0;
			for(auto it:str){
				if(it=='a'){
					mask|=(1<<0);
				}
				else if(it=='e'){
					mask|=(1<<1);
				}
				else if(it=='i'){
					mask|=(1<<2);
				}
				else if(it=='o'){
					mask|=(1<<3);
				}
				else if(it=='u'){
					mask|=(1<<4);
				}
			}cnt[mask]++;
		}	
		ll ans=0;
		for(int i=0;i<32;i++){
			for(int j=i+1;j<32;j++){
				if((i|j)==31){
					ans+=cnt[i]*cnt[j];
				}
			}
		}
		ans+=cnt[31]*1ll*(cnt[31]-1)/2;
		cout<<ans<<"\n";
	}
	return 0;
}
