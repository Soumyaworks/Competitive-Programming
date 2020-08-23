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
		int t,n,k,i,j,c,p;
		t=sc.nextInt();
		while(t>0)
		{
		    n=sc.nextInt();
		    k=sc.nextInt();
		    int w[]=new int[n];
		    for(i=0;i<n;i++)
		    w[i]=sc.nextInt();
		    i=0;
		    p=0;
		    c=0;
		    int f=0;
		    while(i<n)
		    {
		        p+=w[i];
		        if(p>k)
		        {
		            c++;
		            p=w[i];
		            if(p>k)
		            {
		                f=1;    
		                System.out.println("-1");
		                break;
		            }
		        }
		        i++;
		        
		    }
		    if(f==0)
		    System.out.println(++c);
		    t--;
		}
	}
}
