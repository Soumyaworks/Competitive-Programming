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

//References : https://www.geeksforgeeks.org/print-all-possible-paths-from-top-left-to-bottom-right-of-a-mxn-matrix/
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
vector<vector<int>> allPaths;
 
void findPathsUtil(vector<vector<int>> maze, int m,
                                 int n, int i, int j,
                          vector<int> path, int indx)
{
     
    // If we reach the bottom of maze,
    // we can only move right
    if (i == m - 1)
    {
        for(int k = j; k < n; k++)
        {
             
            //path.append(maze[i][k])
            path[indx + k - j] = maze[i][k];
        }
         
        // If we hit this block, it means one
        // path is completed. Add it to paths
        // list and print
        /*
        cout << "[" << path[0] << ", ";
        for(int z = 1; z < path.size() - 1; z++)
        {
            cout << path[z] << ", ";
        }
        cout << path[path.size() - 1] << "]" << endl;
        */
        allPaths.push_back(path);
        return;
    }
         
    // If we reach to the right most
    // corner, we can only move down
    if (j == n - 1)
    {
        for(int k = i; k < m; k++)
        {
            path[indx + k - i] = maze[k][j];
        }
         
        //path.append(maze[j][k])
        // If we hit this block, it means one
        // path is completed. Add it to paths
        // list and print
        /*
        cout << "[" << path[0] << ", ";
        for(int z = 1; z < path.size() - 1; z++)
        {
            cout << path[z] << ", ";
        }
        cout << path[path.size() - 1] << "]" << endl;
        */
        allPaths.push_back(path);
        return;
    }
       
    // Add current element to the path list
    //path.append(maze[i][j])
    path[indx] = maze[i][j];
       
    // Move down in y direction and call
    // findPathsUtil recursively
    findPathsUtil(maze, m, n, i + 1,
                  j, path, indx + 1);
       
    // Move down in y direction and
    // call findPathsUtil recursively
    findPathsUtil(maze, m, n, i, j + 1,
                        path, indx + 1);
}
     
void findPaths(vector<vector<int>> maze,
                       int m, int n)
{
    vector<int> path(m + n - 1, 0);
    findPathsUtil(maze, m, n, 0, 0, path, 0);
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
    int t,i,j,k,n,m,c;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        //cout<<"NEW TEST\n";
        /*
        vector<vector<int>>maze(n,vector<int>(m));
        c=1;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                maze[i][j]=c++;
            }
        }
        findPaths(maze,n,m);
        int f=0;
        c=0;
        for(i=0;i<allPaths.size();i++){
            int x=1;
            int y=1;
            c=0;
            for(j=1;j<allPaths[0].size();j++){
                cout<<allPaths[i][j]<<" ";
                int p=allPaths[i][j];
                if((allPaths[i][j-1]+m-1)<p){
                    c+=y;
                    x++;
                }
                else{
                    c+=x;
                    y++;
                }
            }
            cout<<"\n";
            cout<<"c="<<c<<"\n";
            
            if(c==k){
                f=1;
                break;
            }
            
        }
        
        if(f==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
        allPaths.clear();
        */
        if(n*m-1==k)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";

    }
    return 0;
}