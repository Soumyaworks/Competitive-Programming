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
ll countpow(ll a,ll b){
    ll c=0;
    while(a!=0){
        a=a/b;
        c++;
    }
    return c;
}
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
    ll t,a,b,i,j,k,c;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==0){
            cout<<0<<"\n";
        }
        else if(b>a)
        cout<<1<<"\n";
        else if(a==b){
            cout<<2<<"\n";
        }
        else{
            c=0;
            while(a!=0){
                ll step1,step2;
                step1=1+countpow(a,b+1);
                if(b!=1)
                step2=countpow(a,b);
                else
                step2=LLONG_MAX;
                if(step1<=step2){
                    b++;
                }
                else{
                    a=a/b;
                }
                c++;
                //cout<<"a="<<a<<" b="<<b<<"\n";
            }
            cout<<c<<"\n";
        }
    }
    return 0;
}