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
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    int h,t,n,i,j,k,c,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        p=0;c=0;
        int ind;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            p++;
            else
            {
                if(p>c)
                {
                    c=p;
                    ind=i-c;
                }
                //c=max(c,p);
                //if(c!=0)
                //ind=i-c;
                p=0;
            }
            
        }
        //ind--;
        if(c!=0){
            //cout<<"ind="<<ind<<"\n";
        h=0;p=0;
        for(i=0;i<n;)
        {
            if(i!=ind)
            {
                if(a[i]==0)
                p++;
                else
                {
                    h=max(h,p);
                    p=0;
                }
                i++;
            }
            else
            {
                i+=c;
            }
            
        }
        }
        //cout<<"c="<<c<<" h="<<h<<"\n";
        if(c%2==0)
        cout<<"No"<<"\n";
        else if(c%2!=0 && h>(c/2))
        {
            cout<<"No"<<"\n";
        }
        else if(c%2!=0 && h<=(c/2))
        cout<<"Yes"<<"\n";
        

    }
    return 0;
}
