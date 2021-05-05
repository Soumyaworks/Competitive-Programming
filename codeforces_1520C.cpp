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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,j,k,c,p;
        if(n==2)
        cout<<-1<<"\n";
        else if(n==1)
        cout<<1<<"\n";
        else{
            int i1,i2,j1,j2;
            int a[n][n];
            fill(a,0);
            p=1;
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(i==j)
                    a[i][j]=p++;
                }
            }
            for(i=n-1;i>=0;i--){
                for(j=0;j<n;j++){
                    if(((i+j)==n-1) && i!=j)
                    a[i][j]=p++;
                }
            }
            i1=1;i2=n-2;j1=1;j2=n-2;
            int x1=0,x2=n-1,y1=0,y2=n-1;
            while(i1<=i2){
                for(ll ind=i1;ind<=i2;ind++){
                    a[ind][y1]=p++;
                    a[ind][y2]=p++;
                }
                y1++;
                y2--;
                for(ll ind=j1;ind<=j2;ind++){
                    a[x1][ind]=p++;
                    a[x2][ind]=p++;
                }
                x1++;
                x2--;
                i1++;
                i2--;
                j1++;
                j2--;
            }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}