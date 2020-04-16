#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
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
        ll u,d;
        cin>>n>>u>>d;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        c=1;
        i=0;
        k=0;
        if(n==1)
        cout<<1<<"\n";
        else
        {
            while(i<n)
            {
                if(a[i]==a[i+1])
                {
                    i++;
                    c++;
                }
                else if((a[i]<a[i+1] && (a[i+1]-a[i])<=u)|| (a[i]>a[i+1] && (a[i]-a[i+1])<=d))
                {
                    i++;
                    c++;
                }
                else if(a[i]<a[i+1] && (a[i+1]-a[i])>u)
                break;
                else if(a[i]>a[i+1] && k==0)
                {
                    i++;
                    k++;
                    c++;
                }
                else if(a[i]>a[i+1] && k>0)
                break;
            }
            
            cout<<c<<"\n";
        }
    }
    return 0;
}
