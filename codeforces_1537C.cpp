#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n],m=INT_MAX,j;
		for(i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		for(i=1;i<n;i++){
			if(arr[i]-arr[i-1]<m){
				m=arr[i]-arr[i-1];
				j=i;
			}
		}
		cout<<arr[j-1]<<" ";
		for(i=j+1;i<n;i++)
		cout<<arr[i]<<" ";
		for(i=0;i<j-1;i++)
		cout<<arr[i]<<" ";
		cout<<arr[j]<<endl;
	}
	return 0;
}