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
    int t,i,j,k,c,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>k;
            a[i]=k%2;
            b[i]=i%2;
        }
        int flag=0,flag1=0;
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                for(j=0;j<n;j++)
                {
                    if(a[j]!=b[j] && (a[j]==b[i] && a[i]==b[j]))
                    {
                        swap(a[i],a[j]);
                        c++;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    for(j=0;j<n;j++)
                    {
                        if(a[j]==b[i] && a[i]==b[j])
                        {
                            swap(a[i],a[j]);
                            c++;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                    flag1=1;
                    break;
                }
            }
        }
        if(flag1==1)
            cout<<-1<<"\n";
        else
            cout<<c<<"\n";
    }
    return 0;
}
