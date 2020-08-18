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
    int t,pc,pr,i,j,k,c,p;
    cin>>t;
    while(t--)
    {
        cin>>pc>>pr;
        int c1,c2;
        i=pc/9;
        if((pc%9==0))
        c1=i;
        else
        c1=i+1;
        
        j=pr/9;
        if(pr%9==0)
        c2=j;
        else
        c2=j+1;
        if(c1<c2)
        {
            cout<<0<<" "<<c1<<"\n";
            /*
            for(k=1;k<=i;k++)
            cout<<9;
            if(c1==i+1)
            cout<<(pc%9)<<"\n";
            */
        }
        else
        {
            cout<<1<<" "<<c2<<"\n";
            /*
            for(k=1;k<=j;k++)
            cout<<9;
            if(c2==i+1)
            cout<<(pr%9)<<"\n";
            */
        }
    }
    return 0;
}
