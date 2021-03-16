#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#pragma GCC optimize("Ofast")
#define ll int
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

// Defintion for a Linked List
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    //ListNode *head=new ListNode();
    //ListNode *ptr1,*ptr2;
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    //TreeNode *root=new TreeNode();
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,c,a,b,e,h;
        cin>>n>>e>>h>>a>>b>>c;
        int ans=INT_MAX;
        int fo=0,fm=0,fc=0;
        vector<ll>price(12,-1);
        int o=(e/2);
        //cout<<"o="<<o<<"\n";
        if(o>=n){
            price[0]=min(o,n)*a;
            fo=1;
        }


        int m=(h/3);
        //cout<<"m="<<m<<"\n";
        if(m>=n){
            price[1]=min(m,n)*b;
            fm=1;
        }


        int ca=min(e,h);
        //cout<<"ca="<<ca<<"\n";
        if(ca>=n){
            price[2]=min(ca,n)*c;
            fc=1;
        }


        int om=0;
        if(fo==0){
            om=o+min(h/3,n-o);
            if(om==n)
            price[3]=o*a+min(h/3,n-o)*b;
        }
        //cout<<"om="<<om<<"\n";
        //if(om>=n)
        //price[3]=o*a+m*b;


        int oc=0;
        //int oc=(e/2)+min(e%2,h);
        if(fo==0){
            oc=o+min(n-o,min(e-(o*2),h));
            if(oc==n)
            price[4]=o*a+(min(n-o,min(e-(o*2),h)))*c;
        }

        //cout<<"oc="<<oc<<"\n";
        //if(oc>=n)
        //price[4]=(e/2)*a+((e%2+h)/2)*c;


        int co=0;
        if(fc==0){
            co=ca+min(n-ca,(e-ca)/2);
            if(co==n)
            price[5]=ca*c+(min(n-ca,(e-ca)/2))*a;
        }
        //cout<<"co="<<co<<"\n";
        //if(co>=n)
        //price[5]=min(e,h)*c+((e-min(e,h))/2)*a;


        int mc=0;
        if(fm==0){
            mc=m+min(n-m,min(e,h-(m*3)));
            if(mc==n)
            price[6]=m*b+(min(n-m,min(e,h-(m*3))))*c;
        }
        //cout<<"mc="<<mc<<"\n";
        //if(mc>=n)
        //price[6]=(h/3)*b+min(h%3,e)*c;


        int cm=0;
        if(fc==0){
            cm=ca+min(n-ca,(h-ca)/3);
            if(cm==n)
            price[7]=ca*c+(min(n-ca,(h-ca)/3))*b;

        }
        //cout<<"cm="<<cm<<"\n";
        //if(cm>=n)
        //price[7]=min(e,h)*c+((h-min(e,h))/3)*b;


        int omc=0;
        if(fo==0 && fm==0){
            omc=om+min(n-om,min(e-(o*2),h-(m*3)));
            if(omc==n)
            price[8]=o*a+min(h/3,n-o)*b+(min(n-om,min(e-(o*2),h-(m*3))))*c;
        }
        //cout<<"omc="<<omc<<"\n";
        //if(omc>=n)
        //price[8]=(e/2)*a+(h/3)*b+min(e%2,h%3)*c;


        int ocm=0;
        if(fo==0 && fc==0){
            ocm=oc+min(n-oc,(h-min(e-(o*2),h))/3);
            if(ocm==n)
            price[9]=o*a+(min(n-o,min(e-(o*2),h)))*c+(min(n-oc,(h-min(e-(o*2),h)/3)))*b;
        }
        //cout<<"ocm="<<ocm<<"\n";
        //if(ocm>=n)
        //price[9]=(e/2)*a+min(e%2,h)*c+((h-min(e%2,h))/3)*b;


        int com=0;
        if(fc==0 && fo==0){
            com=co+min(n-co,(h-ca)/3);
            if(com==n)
            price[10]=ca*c+(min(n-ca,(e-ca)/2))*a+(min(n-co,(h-ca)/3))*b;
        }
        //cout<<"com="<<com<<"\n";
        //if(com>=n)
        //price[10]=min(e,h)*c+((e-min(e,h))/2)*a+((h-min(e,h))/3)*b;

        /*
        int moc=0;
        if(fm==0 && fo==0){
            moc=
        }
        cout<<"moc="<<moc<<"\n";
        //if(moc>=n)
        //price[11]=(h/3)*b+(e/2)*a+min(e%2,h%3)*c;
        */

        int mco=0;
        if(fm==0 && fc==0){
            mco=mc+min(n-mc,(e-ca)/2);
            if(mco==n)
            price[11]=m*b+(min(n-m,min(e,h-(m*3))))*c+(min(n-mc,(e-ca)/2))*a;
        }
        //cout<<"mco="<<mco<<"\n";
        //if(mco>=n)
        //price[11]=(h/3)*b+min(e,h%3)*c+((e-min(e,h%3))/2)*a;

        for(i=0;i<12;i++){
            if(price[i]!=-1 && price[i]!=0 && price[i]<ans)
            ans=price[i];
            //cout<<price[i]<<" ";
        }
        //cout<<"\n";
        if(ans==INT_MAX)
        cout<<-1<<"\n";
        else
        cout<<ans<<"\n";
    }
    return 0;
}