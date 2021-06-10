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
    int t,n,i,k,j;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        int m1,m2;
        m1=*max_element(a.begin(),a.end());
        m2=*min_element(a.begin(),a.end());
        if(m1==m2)
        cout<<1<<"\n";
        else{
            int p1,p2;
            for(i=0;i<n;i++){
                if(a[i]==m1)
                p1=i;
                if(a[i]==m2)
                p2=i;
            }
            int ans;
            //ans=min(p1+1,n-p1)+min(p2+1,n-p2);
            /*
            if(p2>p1 && (p1+1)<(n-p1) && (p2-p1)<=(n-p2)){
                ans=(p1+1)+(p2-p1);
            }
            else if(p2>p1 && (p1+1)<(n-p1) && (p2-p1)>(n-p2))
            ans=(p1+1)+(n-p2);
            else if(p1>p2 && (p2+1)<(n-p2) && (p1-p2)>(n-p1))
            ans=(p2+1)+(n-p1);
            else if(p1>p2 && (p2+1)<(n-p2) && (p1-p2)<=(n-p1))
            ans=(p2+1)+(p1-p2);
            else if(p2>p1 && (p1+1)>=(n-p1) && (p2-p1)<=(n-p2))
            */
            //ans=min(min(p1+1,n-p1),min(p2+1,n-p2));
            int low=0,high=n-1;
            while(low<=high){
                if(a[low]==m1){
                    ans=low+1;
                    ans+=min(p2-low,n-p2);
                    break;
                }
                else if(a[low]==m2){
                    ans=low+1;
                    ans+=min(p1-low,n-p1);
                    break;
                }
                else if(a[high]==m1){
                    ans=n-high;
                    ans+=min(p1-p2,p2+1);
                    break;
                }
                else if(a[high]==m2){
                    ans=n-high;
                    ans+=min(p2-p1,p1+1);
                    break;
                }
                low++;
                high--;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}