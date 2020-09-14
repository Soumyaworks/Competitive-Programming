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
    ll n1,t,n,i,j,k,c,p,f,q;

    cin>>t;
    while(t--)
    {
        cin>>n;
        //ll a[n];
        //for(i=0;i<n;i++)
        //a[i]=i+1;
        n1=(n*(n+1))/2;
        if(n1%2!=0)
        cout<<0<<"\n";
        else
        {
            p=n1/2;
            c=0;
            k=0;
            f=0;
            /*
            for(i=n;i>=1;i--)
            {
                k+=i;
                c++;
                if(k==p)
                {
                    f=1;
                    break;
                }
                if(k>p)
                break;
            }
            */
            q=((ll)sqrt(1+4*n1)-1)/2;
            //cout<<"q="<<q<<"\n";
            if(((q*(q+1))/2)==p)
            {
                f=1;
                i=q+1;
            }
            else
            c=(n-q);
            if(f==0)
            cout<<c<<"\n";
            else
            {
                ll x,y,v,w;
                x=n-i+2;
                y=(i-1);
                v=(x*(x-1))/2;
                w=(y*(y-1))/2;
                cout<<(v+w)<<"\n";
            }
        }
    }
    return 0;
}
