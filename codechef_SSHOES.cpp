#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,n,k,i,j,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,ll>mymap;
        for(i=0;i<n;i++)
        {
            mymap[s[i]]++;
        }
        ll f=0;
        for(auto it:mymap)
        {
            if((it.se)%2!=0)
            {
                f=1;
                break;
            }
            else
            {
                if((it.se)/2 > k)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
    return 0;
}
