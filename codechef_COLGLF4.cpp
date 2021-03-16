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
//ll ans2=LLONG_MAX;
ll calculate(ll n,ll e,ll h,ll a,ll b,ll c,ll ans2){
    //base case
    if(n<=0)
    {
        //cout<<"n<=0"<<"\n";
        return 0;
    }
    //milkshakes
    if(n<=h/3)
    {
        //cout<<"milkshakes"<<"\n";
        ans2=min(n*b,ans2);
        //cout<<"ans2="<<ans2<<"\n";
    }
    //omlettes
    if(n<=e/2)
    {
        //cout<<"Omlettes"<<"\n";
        ans2=min(n*a,ans2);
        //cout<<"ans2="<<ans2<<"\n";
    }
    //choc cakes
    if(n<=e && n<=h)
    {
        //cout<<"Cakes"<<"\n";
        ans2=min(n*c,ans2);
        //cout<<"ans2="<<ans2<<"\n";
    }
    //milkshakes and omlettes
    if(e>=2 && (e/2)>=(2-h+n*3)/3){
        //cout<<"Milkshakes and omlettes"<<"\n";
        if(a<b)
        {
            if(min(e/2,n-1)>0 && min(e/2,n-1)<n){
                ans2=min(ans2,(a-b)*(min(e/2,n-1))+b*n);
                if(ans2<0)
                ans2=LLONG_MAX;
                //cout<<"a<b"<<"\n";
                //cout<<"ans2="<<ans2<<"\n";
            }
        }
        else
        {
            if(max((ll)1,(2+n*3-h)/3)>0 && max((ll)1,(2+n*3-h)/3)<n){
                ans2=min(ans2,(a-b)*(max((ll)1,(2+n*3-h)/3))+b*n);
                if(ans2<0)
                ans2=LLONG_MAX;
                //cout<<"a>=b";
                //cout<<"ans2="<<ans2<<"\n";
            }
        }
    }
    //cakes and milkshakes
    if((h-n)/2>=1 && (h-n)/2>=(n-e)){
        //cout<<"Cakes and milkshakes"<<"\n";
        if(b<c){
            //cout<<"b<c"<<"\n";
            if(min(n-1,(h-n)/2)>0 && min(n-1,(h-n)/2)<n){
                ans2=min(ans2,c*n+(b-c)*(min(n-1,(h-n)/2)));
                if(ans2<0)
                ans2=LLONG_MAX;
                //cout<<"ans2="<<ans2<<"\n";
            }
        }
        else
        {
            if(max((ll)1,n-e)>0 && max((ll)1,n-e)<n){
                ans2=min(ans2,c*n+(b-c)*(max((ll)1,n-e)));
                if(ans2<0)
                ans2=LLONG_MAX;
                //cout<<"b>=c"<<"\n";
                //cout<<"ans2="<<ans2<<"\n";
            }
        }
    }
    //cakes and omlettes
    if((e-n)>=1 && (e-n)>=(n-h)){
        //cout<<"Cakes nd omlettes"<<"\n";
        if(a<c)
        {
            //cout<<"a<c"<<"\n";
            if(min(e-n,n-1)>0 && min(e-n,n-1)<n){
                ans2=min(ans2,c*n+(a-c)*(min(e-n,n-1)));
                if(ans2<0)
                ans2=LLONG_MAX;
                //cout<<"ans2="<<ans2<<"\n";
            }
        }
        else
        {
            if(max((ll)1,n-h)>0 && max((ll)1,n-h)<n){
                ans2=min(ans2,c*n+(a-c)*(max((ll)1,n-h)));
                if(ans2<0)
                ans2=LLONG_MAX;
                //cout<<"a>=c"<<"\n";
                //cout<<"ans2="<<ans2<<"\n";
            }
        }
    }
    //all 3
    if(n>2 && h>3 && e>2){
        //cout<<"all 3"<<"\n";
        ans2=min(ans2,(a+b+c+calculate(n-3,e-3,h-4,a,b,c,ans2)));
        if(ans2<0)
        ans2=LLONG_MAX;
        //cout<<"ans2="<<ans2<<"\n";
    }
    return ans2;
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
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;
        vector<ll>price(6,-1);
        ll o=e/2;
        ll m=h/3;
        ll ca=min(e,h);
        ll omc=0;
        if(o>=n){
            omc=min(n,o);
            price[0]=omc*a;
        }
        else if(o<n && m>=(n-o)){
            omc=o+min(n-o,m);
            price[0]=o*a+min(n-o,m)*b;
        }
        else if(o<n && m<(n-o)){
            omc=o+m+min(n-(o+m),min(e-o*2,h-m*3));
            if(omc==n)
            price[0]=o*a+m*b+(min(n-(o+m),min(e-o*2,h-m*3)))*c;
        }
        //cout<<"omc="<<omc<<"\n";

        ll ocm=0;
        if(o>=n){
            ocm=min(n,o);
            price[1]=ocm*a;
        }
        else if(o<n && min(e-o*2,h)>=(n-o)){
            ocm=o+(n-o);
            price[1]=o*a+(n-o)*c;
        }
        else if(o<n && min(e-o*2,h)<(n-o)){
            ocm=o+min(e-o*2,h)+min(n-(o+min(e-o*2,h)),(h-min(e-o*2,h))/3);
            if(ocm==n)
            price[1]=o*a+(min(e-o*2,h))*c+(min(n-(o+min(e-o*2,h)),(h-min(e-o*2,h))/3))*b;
        }
        //cout<<"ocm="<<ocm<<"\n";

        ll mco=0;
        if(m>=n){
            mco=n;
            price[2]=mco*b;
        }
        else if(m<n && min(e,h-m*3)>=(n-m)){
            mco=n;
            price[2]=m*b+(n-m)*c;
        }
        else if(m<n && min(e,h-m*3)<(n-m)){
            mco=m+min(e,h-m*3)+min(n-(m+min(e,h-m*3)),(e-min(e,h-m*3))/2);
            if(mco==n)
            price[2]=m*b+(min(e,h-m*3))*c+(min(n-(m+min(e,h-m*3)),(e-min(e,h-m*3))/2))*a;
        }
        //cout<<"mco="<<mco<<"\n";

        ll moc=0;
        if(m>=n){
            moc=n;
            price[3]=moc*b;
        }
        else if(m<n && o>=(n-m)){
            moc=n;
            price[3]=m*b+(n-m)*a;
        }
        else if(m<n && o<(n-m)){
            moc=m+o+min(n-(o+m),min(e-o*2,h-m*3));
            if(moc==n)
            price[3]=m*b+o*a+(min(n-(o+m),min(e-o*2,h-m*3)))*c;
        }
        //cout<<"moc="<<moc<<"\n";

        ll com=0;
        if(ca>=n){
            com=n;
            price[4]=com*c;
        }
        else if(ca<n && ((e-ca)/2)>=(n-ca)){
            com=n;
            price[4]=ca*c+(n-ca)*a;
        }
        else if(ca<n && ((e-ca)/2)<(n-ca)){
            com=ca+((e-ca)/2)+min(n-(ca+((e-ca)/2)),(h-ca)/3);
            if(com==n)
            price[4]=ca*c+((e-ca)/2)*a+(min(n-(ca+((e-ca)/2)),(h-ca)/3))*b;
        }
        //cout<<"com="<<com<<"\n";

        ll cmo=0;
        if(ca>=n){
            cmo=n;
            price[5]=cmo*c;
        }
        else if(ca<n && ((h-ca)/3)>=(n-ca)){
            cmo=n;
            price[5]=ca*c+(n-ca)*b;
        }
        else if(ca<n && ((h-ca)/3)<(n-ca)){
            cmo=ca+((h-ca)/3)+min(n-(ca+((h-ca)/3)),(e-ca)/2);
            if(cmo==n)
            price[5]=ca*c+((h-ca)/3)*b+(min(n-(ca+((h-ca)/3)),(e-ca)/2))*a;
        }
        //cout<<"cmo="<<cmo<<"\n";

        ll ans=LLONG_MAX;
        for(i=0;i<6;i++){
            if(price[i]!=-1 && price[i]!=0 && price[i]<ans){
                ans=price[i];
            }
            //cout<<price[i]<<" ";
        }
        //cout<<"\n";
        /*
        if(ans==LLONG_MAX)
        cout<<-1<<"\n";
        else
        cout<<ans<<"\n";
        */
       ll p=0;
       ll f=0;
       
       //ll ans2=LLONG_MAX;
       /*
        for(i=0;i<=o;i++){
            //if(i>n)
            //break;
            for(j=0;j<=m;j++){
                
                if(j>n || (i+j)>n)
                {
                    f=1;
                    break;
                }
                
                k=min(e-i*2,h-j*3);
                if((i+j+k)==n){
                    p=i*a+j*b+k*c;
                    if(p!=0 && p<ans2)
                    ans2=p;
                }
            }
            //if(f==1)
            //break;
        }
        */
       /*
        i=j=k=0;
        while(i<ca){
            j=i;
            while(j<e){
                k=i;
                while(k<h){
                    //k=i;
                    if((i+j/2+k/3)>=n){
                        ans2=min(ans2,b*k/3+a*j+c*i);
                    }
                    k++;
                }
                j++;
            }
            i++;
        }
        */
       //all variable case consideraton
       //ll ans2=LLONG_MAX;
       ll ans2=LLONG_MAX;
       //cout<<"Values:"<<"\n";
       //cout<<n<<e<<h<<a<<b<<c<<"\n";
        ans2=calculate(n,e,h,a,b,c,ans2);
        //cout<<"ans="<<ans<<" ,ans1="<<ans2<<"\n";
        ans=min(ans,ans2);
        

        if(ans==LLONG_MAX)
        cout<<-1<<"\n";
        else
        cout<<ans<<"\n";
    }
    return 0;
}

