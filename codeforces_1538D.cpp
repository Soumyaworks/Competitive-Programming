//Author : Soumya Banerjee
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#pragma GCC optimize("Ofast")
#define ll int
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
ll countprimefac(ll n){
    ll  c=0;
    while(n%2==0){
        n=n/2;
        c++;
    }
    for(ll i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            c++;
            n=n/i;
        }
    }
    if(n>2) //if n is a prime number greater than 2
    c++;
    return c;
}
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
    ll t,i,j,k,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        if(k==1){
            if(a==b)
            cout<<"NO"<<"\n";
            else{
                if(a%b==0 || b%a==0)
                cout<<"YES"<<"\n";
                else
                cout<<"NO"<<"\n";
            }
        }
        else{
            i=countprimefac(a);
            j=countprimefac(b);
            c=i+j;
            if(k<=c)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}