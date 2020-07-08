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
    int n,i,j,k,c,p;
    cin>>n;
    vector<string>s(n);
    
    set<string>S;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        S.insert(s[i]);
    }
    int m;
    cin>>m;
    string str;
    cin>>str;
    c=0;p=0;
    
    
    
        for(auto it:S)
        {
            
            //cout<<it<<"\n";
            //c=0;
            size_t pos=str.find(it);
            if(pos!=string::npos)
            c++;
        }
    
    cout<<c<<"\n";
    return 0;
}