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

class SegmentTree
{
private:
    vector<ll>st,A;
    ll n;
    ll left(ll p)
    {
        return p<<1;
    }
    ll right(ll p)
    {
        return (p<<1)+1;
    }
    void build(ll p,ll L,ll R)
    {
        if(L==R)
            st[p]=L;
        else
        {
            build(left(p),L,(L+R)/2);
            build(right(p),(L+R)/2+1,R);
            ll p1=st[left(p)];
            ll p2=st[right(p)];
            st[p]=(A[p1]>=A[p2])?p1:p2;
        }
    }
    ll rmq(ll p,ll L,ll R,ll i,ll j)
    {
        if(i>R || j<L)
            return -1;
        if(L>=i && R<=j)
            return st[p];
        ll p1=rmq(left(p),L,(L+R)/2,i,j);
        ll p2=rmq(right(p),(L+R)/2+1,R,i,j);
        if(p1==-1)
            return p2;
        if(p2==-1)
            return p1;
        return (A[p1]>=A[p2])?p1:p2;
    }

public:
    SegmentTree(const vector<ll>&qlty)
    {
        A=qlty;
        n=(ll)A.size();
        st.assign(4*n,0);
        build(1,0,n-1);
    }
    ll rmq(ll i,ll j)
    {
        return rmq(1,0,n-1,i,j);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,n,i,j,k,c,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<ll>qlty(n),qnty(n);
        for(i=0;i<n;i++)
        cin>>qlty[i];
        for(i=0;i<n;i++)
        cin>>qnty[i];
        SegmentTree ob(qlty);
        while(q--)
        {
            ll L,R,qt,v,thr,x,y;
            cin>>p;
            
            if(p==1)
            {
                cin>>L>>R>>qt;
                //SegmentTree ob(qnty);
                L--;
                R--;
                x=ob.rmq(L,R);
                qnty[x]+=qt;
                //SegmentTree ob(qnty);
            }
            else if(p==2)
            {
                cin>>v>>i>>qt>>thr;
                i--;
                L=max((ll)0,i-v);
                R=min(n-1,i+v);
                x=ob.rmq(L,R);
                if(qlty[x]<thr || qnty[x]<qt)
                cout<<"No purchase"<<"\n";
                else
                {
                    qnty[x]=qnty[x]-qt;
                    cout<<(x+1)<<"\n";
                }
                
            }
            
        }
    }
    return 0;
}
