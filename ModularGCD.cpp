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
//Modular GCD
//https://www.codechef.com/problems/GCDMOD?tab=statement
ll po(ll a,ll b,ll n){
	ll res=1;while(b){
		if(b%2){
			res=(res%n*a%n)%n;
		}
		a=(a%n*a%n);b/=2;
	}
	return res%n;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll a,b,n;cin>>a>>b>>n;
		ll diff=abs(a-b);
		if(diff==0){
			cout<<(po(a,n,mod)+po(a,n,mod))%mod<<"\n";
		}
		else{ll ans=1;
			for(ll i=1;i*i<=diff;i++){
				if(diff%i==0){
				ll temp=(po(a,n,i)+po(b,n,i))%i;
				if(temp==0){
					ans=max(ans,i);
				}
				temp=(po(a,n,diff/i)+po(b,n,diff/i))%(diff/i);
				if(temp==0){
					ans=max(ans,diff/i);
				}}
			}
			cout<<ans%mod<<"\n";
		}
	}
	return 0;
}
