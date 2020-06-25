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
    vector<int>st,A;
    int n;
    int left(int p)
    {
        return p<<1;
    }
    int right(int p)
    {
        return (p<<1)+1;
    }
    void build(int p,int L,int R)
    {
        if(L==R)
            st[p]=L;
        else
        {
            build(left(p),L,(L+R)/2);
            build(right(p),(L+R)/2+1,R);
            int p1=st[left(p)];
            int p2=st[right(p)];
            st[p]=(A[p1]<=A[p2])?p1:p2;
        }
    }
    int rmq(int p,int L,int R,int i,int j)
    {
        if(i>R || j<L)
            return -1;
        if(L>=i && R<=j)
            return st[p];
        int p1=rmq(left(p),L,(L+R)/2,i,j);
        int p2=rmq(right(p),(L+R)/2+1,R,i,j);
        if(p1==-1)
            return p2;
        if(p2==-1)
            return p1;
        return (A[p1]<=A[p2])?p1:p2;
    }

public:
    SegmentTree(const vector<int>&_A)
    {
        A=_A;
        n=(int)A.size();
        st.assign(4*n,0);
        build(1,0,n-1);
    }
    int rmq(int i,int j)
    {
        return rmq(1,0,n-1,i,j);
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int t,q,n,i,j,k,p,c;
    cin>>n;
    vector<int>b1(n),b2(n);
    for(i=0;i<n;i++)
        {
            cin>>b1[i];
            b2[i]=-b1[i];
        }
    SegmentTree st1(b1);
    SegmentTree st2(b2);

    cin>>q;
    while(q--)
    {
        int L,R;
        cin>>L>>R;
        //cout<<st1.rmq(L,R)<<" "<<st2.rmq(L,R)<<"\n";
        int m=b1[st1.rmq(L,R)];
        int M=b1[st2.rmq(L,R)];
        int Mm;
        if(L>0 || R<n-1)
            Mm=max(b1[st2.rmq(0,max(0,L-1))],b1[st2.rmq(min(n-1,R+1),n-1)]);
        else
            Mm=0;
        //cout<<"m="<<m<<" M="<<M<<" Mm="<<Mm<<"\n";
        double f=(M-m)/2.0;
        if(Mm>f)
            f=1.0*Mm;
        double ans=m+f;
        ans=1.0*ans;
        if(n==1)
            cout<<fixed<<setprecision(1)<<1.0*b1[0]<<"\n";
        else
            cout<<fixed<<setprecision(1)<<ans<<"\n";

    }
    return 0;
}
