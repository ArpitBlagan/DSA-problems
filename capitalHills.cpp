/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Q: In this question we have to tell the pair where between them no array element
//greater than one of them like arr[i]&arr[j] from i+1 to j-1 there should no element
// greater then arr[i],arr[j];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	stack<pair<int,int>>st;int cnt=0;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		while(st.empty()==false&&st.top().first<a){
			cnt+=st.top().second;st.pop();
		}if(st.empty()){st.push({a,1});}
		else if(st.top().first==a){
			cnt+=st.top().second;if(st.size()>1){cnt++;}
			st.top().second++;
		}
		else{
			cnt++;st.push({a,1});
		}
	}cout<<cnt;
	return 0;
}