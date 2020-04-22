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
        cin>>n;
        ll a[n],po[n],ne[n];
        ll pos=0,neg=0;
        j=k=0;
        ll sp,sn;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
                {
                    if(j==0)
                        sp=i;
                    pos++;
                    po[j++]=i;
                }
            else
                {
                    if(k==0)
                        sn=i;
                    neg++;
                    ne[k++]=i;
                }
        }
        ll maxlen;
        if(pos>neg)
            maxlen=(2*neg+1);
        else
            maxlen=(2*pos+1);
        ll st;
        if(pos<neg)
            st=sn;
        else
            st=sp;

        ll dp[n],f=0;
        c=0;
        k=LLONG_MIN;
        ll q;
        q=LLONG_MIN;
        j=0;//k=0;
        neg=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                if(neg==0)
                c=q;
                q=LLONG_MIN;
                p=c+a[i];
                k=max(p,k);
                neg=1;
            }
            else
            {
                if(neg==1)
                c=k;
                neg=0;
                j=c+a[i];
                k=LLONG_MIN;
                q=max(q,j);
            }
        }
        if(neg==1)
            c=k;
        else
            c=q;
        cout<<c<<"\n";

    }
    return 0;
}
