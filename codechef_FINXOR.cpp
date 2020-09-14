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
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    int n,t,i,j,k,c,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        cout<<1<<" "<<(ll)pow(2,20)<<endl;
        int s1=0,s2=0;
        cin>>s1;
        if(s1==-1)
        exit(0);
        s1-=(((ll)pow(2,20))*n);
        if(s1&1)
        p++;
        i=1;
        while(i<=19){
            s2=s1+(n*(ll)pow(2,i));
            cout<<1<<" "<<(ll)pow(2,i)<<endl;
            cin>>j;
            if(j==-1)
            exit(0);

            j=s2-j;
            j=j/(ll)pow(2,i);
            j=j/2;
            if(j&1)
            p+=pow(2,i);
            //j--;
            i++;
        }
        cout<<2<<" "<<p<<endl;
        cin>>k;
        if(k==-1)
        exit(0);
        else
        {
            continue;
        }
        
    }
    return 0;
}
