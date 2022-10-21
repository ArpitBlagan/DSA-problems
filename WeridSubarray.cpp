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
//Weird Subarrays CodeChef...
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);
		for(int i=0;i<n;i++){cin>>arr[i];}
		vector<int>peak;peak.push_back(1);
		for(int i=1;i<arr.size()-1;i++){
			if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
				peak.push_back(i+1);
			}
		}peak.push_back(n);
		ll total=0;ll cnt=0;
		for(int i=1;i<peak.size();i++){
			cnt=(peak[i]-peak[i-1])+1;
			total+=(cnt*(cnt+1))/2;
		}
		total-=(peak.size()-2);
		cout<<total<<"\n";
	}
	return 0;
}