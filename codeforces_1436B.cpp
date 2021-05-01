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
    int t,n,i,k,j,c,p;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i==j) || (i+j==n-1)){
                    a[i][j]=1;
                }
                else
                a[i][j]=0;
            }
        }
        if(n%2!=0){
            p=(n/2);
            //cout<<"p="<<p<<"\n";
            a[0][p]=1;
            a[n-1][p]=1;
            a[p][0]=1;
            a[p][n-1]=1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}