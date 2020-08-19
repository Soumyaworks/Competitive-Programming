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
    ll t,x1,y1,x2,y2,q,i,j,k,c,p;
    cin>>t;
    while(t--)
    {
        string s;
        unordered_map<char,ll>mymap;
        cin>>s;
        for(i=0;i<s.length();i++)
        mymap[s[i]]++;
        
        cin>>x1>>y1;
        cin>>q;
        while(q--)
        {
            char ch1,ch2;
            cin>>x2>>y2;
            p=x2-x1;
            ch1=(p>=0)?'R':'L';
            k=y2-y1;
            ch2=(k>=0)?'U':'D';
            //cout<<"ch1="<<ch1<<" ch2="<<ch2<<"\n";
            if(mymap[ch1]>=abs(p) && mymap[ch2]>=abs(k))
            {
                cout<<"YES "<<(abs(p)+abs(k))<<"\n";
            }
            else
            cout<<"NO"<<"\n";
            
        }
        mymap.clear();
    }
    return 0;
}
