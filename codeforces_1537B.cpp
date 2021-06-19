//Author : Soumya Banerjee
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
    ll t,n,i,j,k,c,p;
    cin>>t;
    while(t--){
        ll x,y;
        ll m,r1,c1,r2,c2;
        cin>>n>>m>>x>>y;
        vector<pair<ll,ll>>v;
        v.pb(mp(1,1));
        v.pb(mp(n,1));
        v.pb(mp(1,m));
        v.pb(mp(n,m));
        c=0;
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(i!=j){
                    p=abs(x-v[i].fi)+abs(y-v[i].se)+abs(v[i].fi-v[j].fi)+abs(v[i].se-v[j].se)+abs(x-v[j].fi)+abs(y-v[j].se);
                }
                else{
                    p=2*(abs(x-v[i].fi)+abs(y-v[i].se));
                }
                if(p>=c){
                    c=p;
                    if(i!=j){
                        r1=v[i].fi;
                        c1=v[i].se;
                        r2=v[j].fi;
                        c2=v[j].se;
                    }
                    else{
                        r1=v[i].fi;
                        c1=v[i].se;
                        r2=v[i].fi;
                        c2=v[i].se;
                    }
                }
            }
        }
        cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<"\n";
    }
    return 0;
}