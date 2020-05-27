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

unordered_map<int,int>mymap;
void prime_fac(int n)
{
    int i;
    while(n%2==0)
    {
        mymap[2]++;
        n=n/2;
    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            mymap[i]++;
            n=n/i;
        }
    }
    if(n>2)
    mymap[n]++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int n,t,i,j,k,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        prime_fac(n);
        c=1;
        for(auto it:mymap)
        {
            //cout<<"it.fi="<<it.fi<<" it.se="<<it.se<<"\n";
            c=c*(((int)pow(it.fi,it.se+1)-1)/(it.fi-1));
        }
        cout<<c-n<<"\n";
        mymap.clear();
    }
    return 0;
}
