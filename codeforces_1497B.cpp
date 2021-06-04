#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,t,a;
int main()
{
	cin>>t;
	while(t--){
		int ans=0,i,j;
		cin>>n>>m;
        vector<int>f(m);
		for(i=1;i<=n;i++)cin>>a,f[a%m]++;
		if(f[0])ans++;
		if(!(m%2)&&f[m/2])ans++;
		for(i=1,j=m-1;i<j;i++,j--)
			if(f[i]||f[j])
				ans+=(f[i]==f[j]?1:abs(f[i]-f[j]));
		cout<<ans<<'\n';
	}
}