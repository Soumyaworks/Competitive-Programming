#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,flag,j;
	string a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		i=0,j=0,flag=0;
		while(j<b.length()){
			if(b[j]==a[i]){
				i++;
				j++;
			}
			else if(b[j]==a[i-1]) j++;
			else{
				flag=1;
				break;
			}
		}
		if(flag==1||i<a.length()) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
	 		 	  		 			 		 	 	   	  				