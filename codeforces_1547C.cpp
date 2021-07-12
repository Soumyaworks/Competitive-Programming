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
    int t,i,j,k,c,p;
    cin>>t;
    while(t--){
        int n,m;
        cin>>k>>n>>m;
        vector<int>a(n),b(m);
        int a0=0,b0=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
            a0++;
        }
        for(i=0;i<m;i++){
            cin>>b[i];
            if(b[i]==0){
                b0++;
            }
        }
        vector<int>ans;
        int p1=0,p2=0,flag=0;
        c=0;
        while(p1<n || p2<m){
            if(p1<n && a[p1]==0){
                while(p1<n && a[p1]==0){
                    ans.pb(0);
                    c++;
                    p1++;
                }
            }
            else if(p1<n && p2<m && a[p1]<=b[p2] && a[p1]!=0){
                if(a[p1]<=(k+c)){
                    ans.pb(a[p1]);
                    p1++;
                }
                else{
                    while(p2<m && b[p2]==0){
                        ans.pb(0);
                        c++;
                        p2++;
                    }
                    if(a[p1]<=(k+c)){
                        ans.pb(a[p1]);
                        p1++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            else if(p2<m && b[p2]==0){
                while(p2<m && b[p2]==0){
                    ans.pb(0);
                    c++;
                    p2++;
                }
            }
            else if(p2<m && b[p2]!=0){
                if(b[p2]<=(k+c)){
                    ans.pb(b[p2]);
                    p2++;
                }
                else{
                    while(p1<n && a[p1]==0){
                        ans.pb(0);
                        c++;
                        p1++;
                    }
                    if(b[p2]<=(c+k)){
                        ans.pb(b[p2]);
                        p2++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            else if(p1<n && a[p1]!=0){
                if(a[p1]<=(k+c)){
                    ans.pb(a[p1]);
                    p1++;
                }
                else{
                    while(p2<m && b[p2]==0){
                        ans.pb(0);
                        c++;
                        p2++;
                    }
                    if(a[p1]<=(k+c)){
                        ans.pb(a[p1]);
                        p1++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
            }
            else{
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        cout<<-1<<"\n";
        else{
            for(auto it:ans)
            cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}