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
    ll t,n,l,r,i,j,k,c;
    cin>>t;
    while(t--){
        cin>>n>>l>>r;
        vector<ll>a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        c=0;
        ll al=0,b=0,aub=0;
        aub=(n*(n-1))/2;
        ll anb=0;
        sort(a.begin(),a.end());
        ll low=0,high=n-1;
        while(low < high){
            if (a[low] + a[high] <= r){
                b = b + (high - low);
                low++;
            }
            else{
                high--;
            }
        }
        low=0,high=n-1;
        while(low < high){
            if (a[low] + a[high] >= l){
                al = al+ (high - low);
                high--;;
            }
            else{
                low++;
            }
        }
        anb=(al+b)-aub;
        cout<<anb<<"\n";
        
    }
    return 0;
}