/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const ll mod=1e9+7;
const int N= 1e5+5;
//B. Minimize the Permutation (codeforces)
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);
		for(int i=0;i<n;i++){cin>>arr[i];arr[i]--;}
		int pos=0;while(pos<n){
			int nxt=min_element(arr.begin()+pos,arr.end())-arr.begin();
			int ele=arr[nxt];
			//erase that element from the array.
			arr.erase(arr.begin()+nxt);
			//add that element at the index
			arr.insert(arr.begin()+pos,ele);
			//if ele is initally a correct position
			if(pos==nxt){pos=nxt+1;}
			//else move to nxt simply because we can't repeat swap operation.
			else{pos=nxt;}
		}for(auto it:arr){cout<<it+1<<" ";}cout<<"\n";
	}
	return 0;
}