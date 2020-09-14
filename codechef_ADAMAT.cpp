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
    int t,n,i,j,k,c,p;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cin>>a[i][j];
        }
        int f=0;
        c=0;
        for(j=n-1;j>=1;j--)
        {
            //p=j+1;
            k=a[0][j];
            if(k==j+1 && f==0)
            {
                continue;
            }
            else if(k!=(j+1) && f==0)
            {
                c++;
                f=1;
            }
            else if(k==(j+1) && f==1)
            {
                c++;
                f=2;
            }
            else if(k!=(j+1) && f==2)
            {
                c++;
                f=1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
