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
    ll t,n,m,i,j,k1,k2,c,p1,p2;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll a[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        c=p1=p2=0;
        ll x1=0,x2=n-1;
        while(x1<=x2){
            ll y1=0,y2=m-1;
            while(y1<=y2){
                /*
                p1=max(a[x1][y1],max(a[x1][y2],max(a[x2][y1],a[x2][y2])));
                p2=min(a[x1][y1],min(a[x1][y2],min(a[x2][y1],a[x2][y2])));
                //cout<<"p="<<p<<"\n";
                k1=abs(p1-a[x1][y1])+abs(p1-a[x1][y2])+abs(p1-a[x2][y1])+abs(p1-a[x2][y2]);
                k2=abs(p2-a[x1][y1])+abs(p2-a[x1][y2])+abs(p2-a[x2][y1])+abs(p2-a[x2][y2]);
                c+=min(k1,k2);
                */
                vector<ll>v;
                if(y1!=y2 && x1!=x2){
                v.pb(a[x1][y1]);
                v.pb(a[x1][y2]);
                v.pb(a[x2][y1]);
                v.pb(a[x2][y2]);
                sort(v.begin(),v.end());
                p1=v[2];
                k1=abs(p1-a[x1][y1])+abs(p1-a[x1][y2])+abs(p1-a[x2][y1])+abs(p1-a[x2][y2]);
                }
                else if(y1==y2 && x1!=x2){
                    v.pb(a[x1][y1]);
                    v.pb(a[x2][y1]);
                    sort(v.begin(),v.end());
                    p1=v[1];
                    k1=abs(p1-a[x1][y1])+abs(p1-a[x2][y1]);
                }
                else if(x1==x2 && y1!=y2){
                    v.pb(a[x1][y1]);
                    v.pb(a[x1][y2]);
                    sort(v.begin(),v.end());
                    p1=v[1];
                    k1=abs(p1-a[x1][y1])+abs(p1-a[x1][y2]);
                }
                else if(x1==x2 && y1==y2){
                    v.pb(a[x1][y1]);
                    p1=v[0];
                    k1=abs(p1-a[x1][y1]);
                }
                //k1=abs(p1-a[x1][y1])+abs(p1-a[x1][y2])+abs(p1-a[x2][y1])+abs(p1-a[x2][y2]);
                c+=k1;
                y1++;
                y2--;
                

            }
            x1++;
            x2--;
        }
        cout<<c<<"\n";
    }
    return 0;
}