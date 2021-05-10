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
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
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
        char a[n][n];
        int x1,y1,x2,y2;
        c=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*' && c==0){
                    x1=i;
                    y1=j;
                    c++;
                }
                else if(a[i][j]=='*'){
                    x2=i;
                    y2=j;
                }
            }

        }
        if(x1==x2){
            if(x1!=n-1){
                a[x1+1][y1]='*';
                a[x2+1][y2]='*';
            }
            else{
                a[x1-1][y1]='*';
                a[x2-1][y2]='*';
            }
        }
        else if(y1==y2){
            if(y1!=n-1){
                a[x1][y1+1]='*';
                a[x2][y2+1]='*';
            }
            else{
                a[x1][y1-1]='*';
                a[x2][y2-1]='*';
            }
        }
        else{
            a[x1][y2]='*';
            a[x2][y1]='*';
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
            cout<<a[i][j];
            cout<<"\n";
        }
    }
    return 0;
}