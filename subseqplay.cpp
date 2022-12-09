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
//Easy Subsequence Selection
//https://www.codechef.com/problems/SUBSPLAY
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;string str;cin>>str;
		int ans=0;
		for(char f='a';f<='z';f++){
			int last=-1;
			for(int i=0;i<n;i++){
				if(str[i]==f){
					if(last==-1){
						last=i;
					}else{
						ans=max(ans,last+n-i);
						last=i;
					}
				}
			}
		}cout<<ans<<"\n";
	}
	return 0;
}
