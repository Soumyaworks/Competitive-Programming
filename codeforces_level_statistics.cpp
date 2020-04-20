#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int t,i,j,k,p,c,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int f=0;
        k=0;j=0;
        for(i=0;i<n;i++)
        {
            cin>>p>>c;
            if(c>p || (k>p && i!=0) || (j>c && i!=0) || (p==k && c>j && i!=0) || ((c-j)>(p-k) && i!=0))
                f=1;
            k=p;
            j=c;

        }
        if(f==1)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
    return 0;
}
