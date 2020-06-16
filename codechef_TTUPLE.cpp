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

ll addmul2(ll p,ll q,ll a,ll b,ll x)
{
    ll i,j,k;
    if(x!=0 && a%x==0 && b%x==0)
    {
        a=a/x;
        b=b/x;
        if((a-p)==(b-q))
        return 2;
        else
        return 10;
    }
    else
    return 10;
}



ll muladd2(ll p,ll q,ll a,ll b,ll x)
{
    ll i,j,k;
    a=a-x;
    b=b-x;
    if(p!=0 && q!=0 && a%p==0 && b%q==0)
    {
        if((a/p)==(b/q))
        return 2;
        else
        return 10;
    }
    else
    return 10;

}

ll addthenmul(ll p,ll q,ll a,ll b,ll x)
{
    p=p+x;
    q=q+x;
    if(p!=0 && q!=0 && a%p==0 && b%q==0 && ((a/p)==(b/q)))
        return 2;
    else
        return 10;
}

ll multhenadd(ll p,ll q,ll a,ll b,ll x)
{
    p=p*x;
    q=q*x;
    if((a-p)==(b-q))
        return 2;
    else
        return 10;
}


ll multhenadd2(ll p,ll q,ll a,ll b,ll x)
{
    p=p*x;
    if((a-p)==(b-q))
        return 2;
    else
        return 10;
}

ll addthenmul2(ll p,ll q,ll a,ll b,ll x)
{
    p=p+x;
    if(p!=0 && q!=0 && a%p==0 && b%q==0 && ((a/p)==(b/q)))
        return 2;
    else
        return 10;
}

ll mulmul(ll p,ll q,ll a,ll b,ll x)
{
    p=p*x;
    if(p!=0 && q!=0 && a%p==0 && b%q==0 && ((a/p)==(b/q)))
        return 2;
    else
        return 10;
}

ll addadd(ll p,ll q,ll a,ll b,ll x)
{
    p=p+x;
    if((a-p)==(b-q))
        return 2;
    else
        return 10;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,p,q,r,a,b,c,c1,i,j,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>r;
        cin>>a>>b>>c;
        if(a==p && b==q && c==r)
        c1=0;
        else if((a==p&&b==q) || (a==p && c==r) || (b==q && c==r))
        c1=1;
        else if(a==p||b==q||c==r)
        c1=2;
        else
        c1=3;
        //cout<<"c1 after checking equality="<<c1<<endl;

        ll diff1,diff2,diff3,d1,d2,d3;
        diff1=a-p;
        diff2=b-q;
        diff3=c-r;

        ll flag=0;
        /*
        if(p!=0 && a%p==0)
        {
            d1=a/p;
            flag=1;
        }
        if(q!=0 && b%q==0)
        d2=b/q;
        if(r!=0 && c%r==0)
        d3=c/r;
        */
        k=c1;
        if(c1>1)
        {

        if(diff1==diff2 && diff2==diff3)
        c1=min((ll)1,c1);
        else if(diff1==diff2||diff1==diff3||diff2==diff3)
        c1=min((ll)2,c1-1);
        }

        j=c1;
        c1=k;
        //cout<<"c1 after checking difference="<<j<<endl;
        if(c1>1)
        {
        if((p!=0 && a%p==0 && q!=0 && b%q==0 && r!=0 && c%r==0) && ((a/p)==(b/q)) && ((b/q)==(c/r)))
        c1=min((ll)1,c1);
        else if((p!=0 && a%p==0 && q!=0 && b%q==0) && ((a/p)==(b/q)))
        c1=min((ll)2,c1-1);
        else if((p!=0 && a%p==0 && r!=0 && c%r==0) && ((a/p)==(c/r)))
        c1=min((ll)2,c1-1);
        else if((r!=0 && c%r==0 && q!=0 && b%q==0) && ((c/r)==(b/q)))
        c1=min((ll)2,c1-1);
        }

        c1=min(c1,j);
        //cout<<"c1 after checking divisibility="<<c1<<endl;
        k=10;
        //checking for any two with 2 steps,1 step of third
        if(p!=0 && a%p==0)
        k=addmul2(q,r,b,c,a/p);
        c1=min(c1,k);
        //cout<<"c1 after 1="<<c1<<endl;
        if(q!=0 && b%q==0)
        k=addmul2(p,r,a,c,b/q);
        c1=min(c1,k);
        //cout<<"c1 after 2="<<c1<<endl;
        if(r!=0 && c%r==0)
        k=addmul2(p,q,a,b,c/r);
        c1=min(c1,k);
        //cout<<"c1 after 3="<<c1<<endl;

        //checking for all three with 2 steps
        ll f1,f2;
        f1=f2=0;
        x=y=0;
        if(p!=q)
        {
            if(((a-b)%(p-q))==0)
            {
                y=((a-b)/(p-q));
                f1=1;
                if(y!=0)
                {
                    if(((a-p*y)%y)==0)
                    {
                        x=(a-p*y)/y;
                        f2=1;
                    }
                }
                if(f1==1 && f2==1 && (r*y + x*y)==c)
                c1=min(c1,(ll)2);
            }
            //cout<<"c1 after 4="<<c1<<endl;
        }

        //check for 2 steps,add then mul

        k=addthenmul(p,q,a,b,(c-r));
        c1=min(c1,k);
        k=addthenmul(p,r,a,c,(b-q));
        c1=min(c1,k);
        k=addthenmul(q,r,b,c,(a-p));
        c1=min(c1,k);

        //cout<<"c1 after checking addthenmul="<<c1<<endl;

        //cout<<"Now checking for mul then add"<<endl;

        //2 each

        k=10;
        k=muladd2(p,q,a,b,(c-r));
        c1=min(c1,k);
        //cout<<"c1 after 1="<<c1<<endl;
        k=muladd2(p,r,a,c,(b-q));
        c1=min(c1,k);
        //cout<<"c1 after 2="<<c1<<endl;
        k=muladd2(q,r,b,c,(a-p));
        c1=min(c1,k);
        //cout<<"c1 after 3="<<c1<<endl;
        //for all 3

        x=y=0;
        f1=f2=0;
        if(p!=q)
        {
            if(((a-b)%(p-q))==0)
            {
                x=((a-b)/(p-q));
                y=a-p*x;
                f1=1;
                f2=1;
            }
            if(f1==1 && f2==1 && (r*x + y)==c)
            c1=min(c1,(ll)2);
            //cout<<"c1 after 4="<<c1<<endl;
        }

        //check for 2 steps,mul then add
        if(p!=0 && a%p==0)
        {
            k=multhenadd(q,r,b,c,(a/p));
            c1=min(c1,k);
        }
        if(q!=0 && b%q==0)
        {
            k=multhenadd(p,r,a,c,(b/q));
            c1=min(c1,k);
        }

        if(r!=0 && c%r==0)
        {
            k=multhenadd(p,q,a,b,(c/r));
            c1=min(c1,k);
        }

        //cout<<"c1 after checking multhenadd="<<c1<<endl;

        //1st change
        
        if(p!=0 && a%p==0)
        {
            k=multhenadd2(q,r,b,c,(a/p));
            c1=min(c1,k);
            k=multhenadd2(r,q,c,b,(a/p));
            c1=min(c1,k);
        }
        if(q!=0 && b%q==0)
        {
            k=multhenadd2(p,r,a,c,(b/q));
            c1=min(c1,k);
            k=multhenadd2(r,p,c,a,(b/q));
            c1=min(c1,k);
        }
        if(r!=0 && c%r==0)
        {
            k=multhenadd2(p,q,a,b,(c/r));
            c1=min(c1,k);
            k=multhenadd2(q,p,b,a,(c/r));
            c1=min(c1,k);
        }

        //cout<<"c1 after 1st change="<<c1<<"\n";

        //2nd change
        
        k=addthenmul2(q,r,b,c,(a-p));
        c1=min(c1,k);
        k=addthenmul2(r,q,c,b,(a-p));
        c1=min(c1,k);

        k=addthenmul2(p,r,a,c,(b-q));
        c1=min(c1,k);
        k=addthenmul2(r,p,c,a,(b-q));
        c1=min(c1,k);

        k=addthenmul2(p,q,a,b,(c-r));
        c1=min(c1,k);
        k=addthenmul2(q,p,b,a,(c-r));
        c1=min(c1,k);

        //cout<<"c1 after 2nd change="<<c1<<"\n";

        //3rd change
        if(p!=0 && a%p==0)
        {
            k=mulmul(q,r,b,c,(a/p));
            c1=min(c1,k);
            k=mulmul(r,q,c,b,(a/p));
            c1=min(c1,k);
        }
        if(q!=0 && b%q==0)
        {
            k=mulmul(p,r,a,c,(b/q));
            c1=min(c1,k);
            k=mulmul(r,p,c,a,(b/q));
            c1=min(c1,k);
        }
        if(r!=0 && c%r==0)
        {
            k=mulmul(p,q,a,b,(c/r));
            c1=min(c1,k);
            k=mulmul(q,p,b,a,(c/r));
            c1=min(c1,k);
        }

        //cout<<"c1 after 3rd change="<<c1<<"\n";

        //4th change
        k=addadd(q,r,b,c,(a-p));
        c1=min(c1,k);
        k=addadd(r,q,c,b,(a-p));
        c1=min(c1,k);

        k=addadd(p,r,a,c,(b-q));
        c1=min(c1,k);
        k=addadd(r,p,c,a,(b-q));
        c1=min(c1,k);

        k=addadd(p,q,a,b,(c-r));
        c1=min(c1,k);
        k=addadd(q,p,b,a,(c-r));
        c1=min(c1,k);

        //cout<<"c1 after 4th change="<<c1<<"\n";
        
        cout<<c1<<endl;

    }
    return 0;
}
