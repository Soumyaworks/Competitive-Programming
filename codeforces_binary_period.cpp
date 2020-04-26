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
    ll t,i,j,k,p,c,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.length();
        ll one=0,zero=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        //cout<<(s+s)<<"\n";
        if(one==0 || zero==0)
            cout<<s<<"\n";
        else
        {
            //p=max(one,zero);
            string str;
            for(i=1;i<=n;i++)
                str+="10";
            cout<<str<<"\n";
        }
    }
    return 0;
}
