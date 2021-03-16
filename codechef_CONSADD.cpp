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
    ll t,r,c,x,i,j,k,f;
    cin>>t;
    while(t--){
        cin>>r>>c>>x;
        vector<vector<ll>>a(r,vector<ll>(c)),b(r,vector<ll>(c)),mat(r,vector<ll>(c));
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            cin>>a[i][j];
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            cin>>b[i][j];
        }
        vector<pair<ll,pair<ll,ll>>>v;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                mat[i][j]=b[i][j]-a[i][j];
                if(mat[i][j]!=0)
                v.pb(mp(mat[i][j],mp(i,j)));
            }
        }
        sort(v.begin(),v.end());
        i=0;
        j=0;
        while(i<r){
            j=0;
            while(j<(c-x+1)){
                if(a[i][j]!=b[i][j]){
                    ll v=b[i][j]-a[i][j];
                    for(f=j;f<j+x;f++){
                        a[i][f]+=v;
                        mat[i][f]=b[i][f]-a[i][f];
                    }
                }
                //else
                //break;
                j++;
            }
            i++;
        }
        //a after 1
        /*
        cout<<"Matrix A after 1 :"<<"\n";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        */
        i=0;
        j=0;
        while(j<c){
            i=0;
            while(i<(r-x+1)){
                if(a[i][j]!=b[i][j]){
                    ll v=b[i][j]-a[i][j];
                    for(f=i;f<(i+x);f++){
                        a[f][j]+=v;
                    }
                }
                //else
                //break;
                i++;
            }
            j++;
        }
        //a ater 2
        /*
        cout<<"Matrix A after 2:"<<"\n";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        */
        f=0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]!=b[i][j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            break;
        }
        if(f==1)
        cout<<"No"<<"\n";
        else
        cout<<"Yes"<<"\n";

    }
    return 0;
}