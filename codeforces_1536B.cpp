#include <bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t>0){
		ll n;cin>>n;
		string s;
		cin>>s;
		unordered_map<string,bool> map1;
		for(int i=0;i<n;i++)
			for(int j=i;j<n;j++){
				map1[s.substr(i,j-i+1)]=1;
			}
		queue<string> q;
		string p="a";
		for(int i=0;i<26;i++){
			q.push(p);
			p[0]++;
		}
		while(map1[q.front()]==1){
		    p="a";
			for(int i=0;i<26;i++){
				q.push(q.front()+p[0]);
				p[0]++;
			}
			q.pop();
		}
		cout<<q.front()<<endl;
		t--;
	}
}
