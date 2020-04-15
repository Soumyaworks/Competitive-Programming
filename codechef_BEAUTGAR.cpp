#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,i,j,k,p,c,n;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    if(s.length()==1)
	    cout<<"yes"<<"\n";
	    else
	    {
	    if(s.length()%2==0)
	    {
	        int c1=0,c2=0;
	        c=0;
	        if(s[0]=='R')
	        c1++;
	        else
	        c2++;
	        for(i=1;i<s.length();i++)
	        {
	            if(s[i]=='R')
	            c1++;
	            else
	            c2++;
	            if(s[i]==s[i-1])
	            c++;
	        }
	        if(s[0]==s[s.length()-1])
	        c++;
	        if(c1==c2 && (c==0||c==2))
	        cout<<"yes"<<"\n";
	        else
	        cout<<"no"<<"\n";
	    }
	    else
	    cout<<"no"<<"\n";
	    }
	}
	return 0;
}
