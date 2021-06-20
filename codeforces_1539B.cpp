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
    int n,q,i,j,k,c,p;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>a(n),b(n);
    for(i=0;i<n;i++){
        a[i]=(int)s[i]-96;
        //cout<<"a[i]="<<a[i]<<" ";
    }
    //cout<<"\n";
    //b[0]=0;
    for(i=0;i<n;i++){
        if(i==0)
        b[i]=a[i];
        else
        b[i]=b[i-1]+a[i];
        //cout<<"b[i]="<<b[i]<<" ";
    }
    //cout<<"\n";
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int ans;
        if(l==0)
        ans=b[r];
        else
        ans=b[r]-b[l-1];
        //int ans=b[r]-b[min(0,l-1)];
        cout<<ans<<"\n";
    }
    return 0;
}