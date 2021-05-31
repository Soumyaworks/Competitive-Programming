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
    ll t,n,j,i,k;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<(n/2)*6<<"\n";
        j=1;
        for(i=1;i<=n/2;i++){
            cout<<1<<" "<<j<<" "<<j+1<<"\n";
            cout<<2<<" "<<j<<" "<<j+1<<"\n";
            cout<<1<<" "<<j<<" "<<j+1<<"\n";
            cout<<2<<" "<<j<<" "<<j+1<<"\n";
            cout<<1<<" "<<j<<" "<<j+1<<"\n";
            cout<<2<<" "<<j<<" "<<j+1<<"\n";
            j+=2;
        }
    }
    return 0;
}