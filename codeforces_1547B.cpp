//Author : Soumya Banerjee
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
bool check(string s){
    int i=-1,j=-1,k;
    for(k=0;k<s.length();k++){
        if(s[k]=='a'){
            i=j=k;
            break;
        }
    }
    if(i==-1)
    return false;
    if(s.length()==1)
    return true;
    char ch='b';
    i--;
    j++;
    while(i>=0 || j<s.length()){
        if(s[i]==ch){
            ch++;
            i--;
        }
        else if(s[j]==ch){
            ch++;
            j++;
        }
        else
        return false;
    }
    return true;
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
    /*
    vector<vector<string>>v;
    v[0].pb("");
    v[1].pb("a");
    int i,j,k;
    unordered_set<string>S;
    S.insert("a");
    for(i=2;i<=26;i++){
        char ch=(char)(97+i-1);
        cout<<"new character:"<<ch<<"\n";
        for(j=0;j<v[i-1].size();j++){
            v[i].pb(v[i-1][j]+ch);
            cout<<"First insert:"<<v[i-1][j]+ch<<"\n";
            v[i].pb(ch+v[i-1][j]);
            cout<<"Second insert:"<<ch+v[i-1][j]<<"\n";
            S.insert(v[i-1][j]+ch);
            S.insert(ch+v[i-1][j]);
        }
    }
    for(auto it:S){
        cout<<it<<" ";
    }
    */
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    
    return 0;
}