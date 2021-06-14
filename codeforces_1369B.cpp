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
    int t,n,i,j,k,c,p;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        string str;
        i=0;c=0;
        vector<int>a;
        for(i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='0')
            a.pb(i);
        }
        if(a.size()){
            reverse(a.begin(),a.end());
            for(auto it:a){
                i=it;
                j=it+1;
                s[i]='2';
                i--;
                j++;
                
                    while(i>=0 && s[i]=='1'){
                        s[i]='2';
                        i--;
                    }
                
                
                    while(j<n && (s[j]=='0'||s[j]=='2')){
                        s[j]='2';
                        j++;
                    }
                
            }
        }
        for(i=0;i<n;i++){
            if(s[i]!='2')
            str+=s[i];
        }
        cout<<str<<"\n";
    }
    return 0;
}