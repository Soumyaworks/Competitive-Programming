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
/*
int tab[2000][2000];
int subsetSum(vector<int>&a, int n, int sum)
{
     
    // If the sum is zero it means
    // we got our expected sum
    if (sum == 0)
        return 1;
         
    if (n <= 0)
        return 0;
   
    // If the value is not -1 it means it
    // already call the function
    // with the same value.
    // it will save our from the repetation.
    if (tab[n - 1][sum] != -1)
        return tab[n - 1][sum];
   
    // if the value of a[n-1] is
    // greater than the sum.
    // we call for the next value
    if (a[n - 1] > sum)
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum);
    else
    {
         
        // Here we do two calls because we
        // don't know which value is
        // full-fill our critaria
        // that's why we doing two calls
        return tab[n - 1][sum] = subsetSum(a, n - 1, sum) ||
                       subsetSum(a, n - 1, sum - a[n - 1]);
    }
}
vector<int> formset(int n,int d){
    vector<int>v;
    int i=d;
    while(true){

    }

}
*/
bool check(int n,int d){
    while(n>0){
        int r=n%10;
        if(r==d)
        return true;
        n=n/10;
    }
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
    int t,q,d,i,j,k,c,p;
    cin>>t;
    while(t--){
        cin>>q>>d;
        int arr[q];
        for(i=0;i<q;i++)
        cin>>arr[i];
        for(i=0;i<q;i++){
            p=arr[i];
            k=0;
            while(p>=d){
                if(check(p,d)){
                    k=1;
                    break;
                }
                p-=d;

            }
            if(k==1)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}