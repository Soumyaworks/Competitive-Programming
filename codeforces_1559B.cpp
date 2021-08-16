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
    ll t,n,i,k,j;
    cin>>t;
    while(t--){
        cin>>n;
        string s,ans;
        cin>>s;
        char ch;
        vector<ll>v;
        for(i=0;i<n;i++){
            if(s[i]!='?')
            v.push_back(i);
        }
        if(v.empty()){
            for(i=0;i<n;i++){
                if(i%2==0)
                s[i]='B';
                else
                s[i]='R';
            }
            cout<<s<<"\n";
        }
        else{
            j=0;
            for(i=0;i<n;){
                if(j>=v.size())
                break;
                k=v[j]-i;
                if(k>0 && s[i]=='?'){
                    //char ch;
                    if(k%2==0)
                    ch=s[v[j]]=='B'?'B':'R';
                    else
                    ch=s[v[j]]=='B'?'R':'B';
                    while(i<n && s[i]=='?'){
                        s[i]=ch;
                        if(ch=='B')
                        ch='R';
                        else
                        ch='B';
                        i++;
                    }
                    i++;
                    j++;
                }
                else if(i==v[j]){
                    i++;
                    j++;
                }
                else
                i++;
            }
            if(i>0 && i<=n-1 && s[i]=='?'){
                ch=s[i-1]=='B'?'R':'B';
                while(i<n && s[i]=='?'){
                    s[i]=ch;
                    if(ch=='B')
                    ch='R';
                    else
                    ch='B';
                    i++;
                }
            }
            cout<<s<<"\n";
        }
    }
    return 0;
}