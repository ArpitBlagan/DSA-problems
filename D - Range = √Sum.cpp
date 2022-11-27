/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e5+7;
//D - Range = √Sum
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll i=3*n,j=5*n;
		if(n%2){
			cout<<(4*n*1ll)<<" ";n--;
		}
		while(n){
			cout<<i<<" "<<j<<" ";n-=2;i++;j--;
		}cout<<"\n";
	}
	return 0;
}