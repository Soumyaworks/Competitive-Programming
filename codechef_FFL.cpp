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
    int t,n,s,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        int b[n];
        for(i=0;i<n;i++)
        cin>>b[i];
        vector<pair<int,int>>v;
        for(i=0;i<n;i++)
        {
            v.pb(mp(a[i],b[i]));
        }
        sort(v.begin(),v.end());
        int f=0;j=0;
        for(auto it:v)
        {
            if(it.se==0 && f==0)
            {
                p=it.fi;
                f=1;
            }
            else if(it.se==1 && j==0)
            {
                k=it.fi;
                j=1;
            }
            if(f==1 && j==1)
            break;
        }
        if(f==1 && j==1)
        {
            if((s+p+k)<=100)
            cout<<"yes"<<"\n";
            else
            cout<<"no"<<"\n";
        }
        else
        cout<<"no"<<"\n";
    }
    return 0;
}
