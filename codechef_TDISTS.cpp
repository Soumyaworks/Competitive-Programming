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
bool isPerfectSquare(ll x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
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
    ll t,x,y,i,j,k;
    cin>>t;
    while(t--){
        cin>>x>>y;
        ll n;
        if(isPerfectSquare(x+y)==false)
        {
            cout<<"NO"<<"\n";
            //cout<<"Stopped here"<<"\n";
        }
        else{
            n=(ll)sqrt(x+y);
            k=0;
            ll e=1,o=n-1;
            while(e<=n-1){
                if(2*o*e==y){
                    k=1;
                    break;
                }
                //cout<<"e="<<e<<" o="<<o<<"\n";
                e++;
                o--;
            }
            if(k==1)
            {
                cout<<"YES"<<"\n";
                cout<<n<<"\n";
                for(i=1;i<=o;i++)
                cout<<1<<" "<<i+1<<"\n";
                for(i=1;i<=e-1;i++)
                cout<<2<<" "<<o+i+1<<"\n";
            }
            else
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
