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
    int t,n,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        int flag=0;
        c=0;
        unordered_map<int,int>mymap;
        for(i=0;i<n;i++)
        {
            if(a[i]==5)
            mymap[5]++;
            else if(a[i]==10)
            {
                mymap[10]++;
                if(mymap[5]>=1)
                mymap[5]--;
                else
                flag=1;
            }
            else
            {
                mymap[15]++;
                if(mymap[10]>=1)
                mymap[10]--;
                else if(mymap[5]>=2)
                mymap[5]-=2;
                else
                flag=1;
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        mymap.clear();
    }
    return 0;
}
