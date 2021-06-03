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
    ll t,n,j,i,k,c,p;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>a(n),b(n);
        ll c1=0,c2=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
            c1++;
            else if(a[i]==-1)
            c2++;
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        if(a[0]!=b[0])
        cout<<"NO"<<"\n";
        else{
            k=0;
            for(i=n-1;i>0;i--){
                if(a[i]==1)
                c1--;
                else if(a[i]==-1)
                c2--;
                if(b[i]!=a[i]){
                    if(b[i]>a[i]){
                        if(c1<=0){
                            k=1;
                            break;
                        }
                    }
                    else{
                        if(c2<=0){
                            k=1;
                            break;
                        }
                    }
                }
            }
            if(k==1)   
            cout<<"NO"<<"\n";
            else
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}