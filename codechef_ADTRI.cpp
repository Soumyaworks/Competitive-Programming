#include <bits/stdc++.h>
#define ll long long int
using namespace std;
# define maxx 10000005
bool arr[maxx];
void pythagoreanTriplets()
{
    ll  c=0;
    ll m = 2;
    while (c < maxx)
    {
        for (ll n = 1; n < m; ++n)
        {
           
            c = m*m + n*n;
            if (c > maxx)
                break;
            ll x;
            if(arr[c]==false)
            {
            	x=c;
            while(x<maxx)
 			{
 				arr[x]=true;
 				x+=c;	
			 }
			 }
        }
        m++;
    }
}
  
//return n % 4 != 3; 
 
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,i,j,k,p,c;
	cin>>t;
	for(i=1;i<=maxx;i++)
	{
		arr[i]=false;
	}
	pythagoreanTriplets();
	while(t--)
	{
	    cin>>n;
	    //n=n*n;
	   if(arr[n]==true)
			//printf("YES\n");
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
	return 0;
}
