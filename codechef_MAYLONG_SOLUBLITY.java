import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
      int T=s.nextInt();

      while(T-->0){  
        int X=s.nextInt();
        int A=s.nextInt();
        int B=s.nextInt();
        int ans=(100-X)*B+A;
        ans=ans*10;
        System.out.println(ans);
       } 
	}
}
