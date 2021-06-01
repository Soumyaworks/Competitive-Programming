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
    int t,i,j,k,n,c,q;
    cin>>n>>q;
    vector<int>a(n);
    unordered_map<int,int>mymap;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(mymap[a[i]]>0)
        continue;
        else
        mymap[a[i]]=i+1;
    }
    /*
    cout<<"Map:"<<"\n";
    for(auto it:mymap){
        cout<<it.fi<<" "<<it.se<<"\n";
    }
    */
    //cout<<"---"<<"\n";
    while(q--){
        cin>>k;
        cout<<mymap[k]<<" ";
        //mymap[k]=1;
        j=mymap[k];
        for(auto it=mymap.begin();it!=mymap.end();it++){
            if(it->first!=k && it->second<j)
            it->second++;
        }
        mymap[k]=1;
        /*
        cout<<"Map:"<<"\n";
        for(auto it:mymap){
            cout<<it.fi<<" "<<it.se<<"\n";
        }
        cout<<"****"<<"\n";
        */
    }
    return 0;
}