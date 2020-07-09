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

    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    //cout<<"Hello World"<<"\n";
    int t,n,k,i,j,c,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        unordered_map<int,int>mymap;
        int a[n];
        c=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        i=j=0;
        p=0;
        while(j<n)
        {
            if(mymap[a[j]]==0 && c==k-1)
            {
                mymap[a[i]]--;
                if(mymap[a[i]]==0)
                c--;
                i++;
                continue;
            }
            mymap[a[j]]++;
            if(mymap[a[j]]==1)
            c++;
            j++;
            p=max(p,j-i);
        }
        mymap.clear();
        cout<<p<<"\n";
    }
    return 0;
}