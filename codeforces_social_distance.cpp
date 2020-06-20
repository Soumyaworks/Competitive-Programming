#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
#define indexed_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int t,i,j,k,p,c,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        vector<pair<int,int>>v(n);
        int f=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0' && f==0)
            {
                v[i].fi=-1;
            }
            else if(s[i]=='0' && f==1)
            {
                v[i].fi=j;
            }
            else if(s[i]=='1' && f==0)
            {
                f=1;
                j=i;
            }
            else if(s[i]=='1' && f==1)
                j=i;
        }
        f=0;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0' && f==0)
            {
                v[i].se=-1;
            }
            else if(s[i]=='0' && f==1)
            {
                v[i].se=j;
            }
            else if(s[i]=='1' && f==0)
            {
                f=1;
                j=i;
            }
            else if(s[i]=='1' && f==1)
                j=i;
        }
        c=0;m=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            m=0;
            if(s[i]=='0')
            {
                if(m==1 && i<n-1 && s[i+1]=='0')
                    v[i+1].fi=p;
                if(v[i].fi!=-1 && v[i].se!=-1)
                {
                    if((i-v[i].fi)>k && (v[i].se-i)>k)
                        {
                            c++;
                            s[i]='1';
                            if(i<n-1 && s[i+1]=='0')
                                {
                                    v[i+1].fi=i;
                                    p=i;
                                    m=1;
                                }
                        }
                }
                else if(v[i].se!=-1 && v[i].fi==-1)
                {
                    if((v[i].se-i)>k)
                        {
                            c++;
                            s[i]='1';
                            if(i<n-1 && s[i+1]=='0')
                                {
                                    v[i+1].fi=i;
                                    p=i;
                                    m=1;
                                }
                        }
                }
                else if(v[i].fi!=-1 && v[i].se==-1)
                {
                    if((i-v[i].fi)>k)
                       {
                            c++;
                            s[i]='1';
                            if(i<n-1 && s[i+1]=='0')
                                {
                                    v[i+1].fi=i;
                                    p=i;
                                    m=1;
                                }
                        }
                }
                else if(v[i].fi==-1 && v[i].se==-1)
                   {
                            c++;
                            s[i]='1';
                            if(i<n-1 && s[i+1]=='0')
                                {
                                    v[i+1].fi=i;
                                    p=i;
                                    m=1;
                                }
                        }
            }
        }
        if(n==1 && s[0]=='0')
            cout<<1<<"\n";
        else
        cout<<c<<"\n";
        v.clear();
    }
    return 0;
}
