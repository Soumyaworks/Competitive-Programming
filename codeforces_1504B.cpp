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
        string a,b;
        cin>>a;
        cin>>b;
        vector<int>v(n,0);
        int z=0,o=0;
        c=0;
        for(i=0;i<n;i++){
            if(a[i]=='0')
            z++;
            else
            o++;
            if(z==o)
            v[i]=1;
            if(a[i]!=b[i])
            c=1;
        }
        if(c==1 && v.size()==0){
            cout<<"NO"<<"\n";
        }
        else if(c==0)
        cout<<"YES"<<"\n";
        else{
        j=v.size()-1;
        vector<int>arr(n,0);
        /*
        cout<<"Vector V:"<<"\n";
        for(auto it:v)
        cout<<it<<" ";
        cout<<"\n";
        
        for(i=n-1;i>=0;i--){
            if(i==v[j] && i==n-1)
            {
                arr[i]=1;
                j--;
            }
            else if(i==v[j]){
                arr[i]=arr[i+1]+1;
                j--;
            }
            else if(i==n-1)
            continue;
            else
            arr[i]=arr[i+1];

        }
        int f=0;
        
        cout<<"Array :"<<"\n";
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";
        */
        int q=0;int first=0;
        int f=0;
        a+='0';
        b+='0';
        for(i=0;i<n;i++){
            if((a[i]==b[i]!=(a[i+1]==b[i+1])) && v[i]==0){
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
        }
    }
    return 0;
}