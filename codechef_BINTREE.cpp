#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll n,v1,v2,i,j,k,p,c1,c2;
    cin>>n;
    while(n--)
    {
        cin>>v1>>v2;
        set<ll>S1,S2;
        S1.insert(v1);
        S2.insert(v2);
        vector<ll>vec1,vec2;
        vec1.pb(v1);
        vec2.pb(v2);
        i=v1;
        while(i>1)
        {
            i=i/2;
            S1.insert(i);
            vec1.pb(i);
        }
        i=v2;
        while(i>1)
        {
            i=i/2;
            S2.insert(i);
            vec2.pb(i);
        }
        c1=c2=0;
        /*
        for(auto it:S1)
        cout<<it<<" ";
        cout<<"\n";
        for(auto it:S2)
        cout<<it<<" ";
        cout<<"\n";
        for(auto it:S1)
        {
            if(S2.find(it)==S2.end())
            {
                c1++;
            }
            else
            {
                p=it;
                break;
            }
        }
        for(auto it:S2)
        {
            if(it==p)
            break;
            else
            c2++;
        }*/
        for(i=0;i<vec1.size();i++)
        {
            if(find(vec2.begin(),vec2.end(),vec1[i])!=vec2.end())
            {
                p=vec1[i];
                break;
            }
            else
            c1++;
        }
        for(i=0;i<vec2.size();i++)
        {
            if(vec2[i]==p)
            break;
            else
            c2++;
        }
        cout<<(c1+c2)<<"\n";
    }
    return 0;
}
