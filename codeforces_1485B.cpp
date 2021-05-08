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
    ll n,q,k,i,j,c,p,ans;
    cin>>n>>q>>k;
    vector<ll>a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>v(n),v1(n);
    j=0;
    if(n>1){
        for(i=0;i<n;i++){
                if(i==0){
                    v[j++]=(a[i+1]-a[i]-1);
                }
                else if(i==n-1)
                v[j++]=(a[i]-a[i-1]-1);
                else
                v[j++]=(a[i]-a[i-1]-1)+(a[i+1]-a[i]-1);
        }
        v1[0]=v[0];
        for(i=1;i<n;i++)
        v1[i]=v1[i-1]+v[i];
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        ans=0;
        /*
        vector<ll>v(r-l+1);
        j=0;
        if(l==r){
            v[0]=k-1;
        }
        else{
            for(i=l;i<=r;i++){
                if(i==l){
                    v[j++]=a[i]-1+(a[i+1]-a[i]-1);
                }
                else if(i==r)
                    v[j++]=(a[i]-a[i-1]-1)+(k-a[i]);
                else
                    v[j++]=a[i]-a[i-1]-1+(a[i+1]-a[i]-1);
            }
        }
        ll ans=0;
        //first vector
        
        cout<<"\nFirst vector:\n";
        for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<"\n";
        
        vector<ll>v2(r-l+1);
        for(i=0;i<v.size();i++){
            if(i==0)
            v2[i]=v[i];
            else
            v2[i]=v2[i-1]+v[i];
        }
        //second vector
        
        for(i=0;i<v.size();i++)
        cout<<v2[i]<<" ";
        cout<<"\n";
        
        for(i=0;i<v.size();i++){
            
            if((v2[v.size()-1]-v2[i])!=0)
            ans+=v[i]*(v2[v.size()-1]-v2[i]);
            else
            ans+=v[i];
            
           ans+=v[i];
        }
        //ans+=v[i];
        */
        if(l==r)
        cout<<k-1<<"\n";
        else{
            ans=(a[l]-1)+(k-a[r]);
            //if((r-l)>1)
            ans+=v1[r-1]-v1[l]+(a[l+1]-a[l]-1)+(a[r]-a[r-1]-1);

            
            cout<<ans<<"\n";
        }
    }
    return 0;
}