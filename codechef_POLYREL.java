/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t,i,j,k,c,n;
		t=sc.nextInt();
		while(t-->0)
		{
		    n=sc.nextInt();
		    int x,y;
		    for(i=0;i<n;i++)
		    {
		        x=sc.nextInt();
		        y=sc.nextInt();
		    }
		    c=n;
	        while(n>=6)
	        {
	            
	            n=n/2;
	            c+=n;
	        }
	        System.out.println(c);
		    
		}
		
	}
}
