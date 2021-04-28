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
    ll a,b,c;
    ll t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        //if(a==1 && b==1 && c==1)
        //cout<<9<<" "<<9<<"\n";
        //else{
            /*
            ll p=0;
            ll k=c;
            while(k){
                p+=9*(ll)pow(10,k-1);
                k--;
            }
            cout<<"p="<<p<<"\n";
            a=a-c;
            ll x=p*(ll)pow(10,a);
            b=b-c;
            ll y=p*(ll)pow(10,b);
            cout<<x<<" "<<y<<"\n";
            
            ll x=(ll)pow(10,a-1);
            ll y=(ll)pow(10,b-1);
            ll k=a;ll mx=0,my=0;
            while(k){
                mx+=9*(ll)pow(10,k-1);
                k--;
            }
            //cout<<"mx="<<mx<<"\n";
            k=b;
            while(k){
                my+=9*(ll)pow(10,k-1);
                k--;
            }
            //cout<<"my="<<my<<"\n";
            ll j=y;
            while(true){
                ll p=__gcd(x,y);
                ll dig=log10(p)+1;
                if(dig==c){
                    cout<<x<<" "<<y<<"\n";
                    //cout<<"gcd="<<p<<"\n";
                    break;
                }
                else if(y==my){
                    x++;
                    y=j;
                }
                else{
                    y++;
                }
            }
            */
        //}
        string x="1",y="1";
        for(int i=1;i<=(a-c);i++)
        x+='0';
        for(int i=1;i<c;i++)
        x+='0';
        for(int i=1;i<=(b-c);i++)
        y+='1';
        for(int i=1;i<c;i++)
        y+='0';
        cout<<x<<" "<<y<<"\n";

    }
    return 0;
}