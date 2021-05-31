import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static long power(long x, long y)
{
    long res = 1;     // Initialize result
    x=x%1000000007;
    y=y%1000000007;
    while (y > 0)
    {
        x=x%1000000007;
        y=y%1000000007;
        // If y is odd, multiply x with result
        if ((y & 1) != 0)
            res = (res * x)%1000000007;
  
        // y must be even now
        y = (y >> 1)%1000000007; // y = y/2
        x = (x * x)%1000000007;  // Change x to x^2
    }
    return res;
}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s = new Scanner(System.in);
		int T=s.nextInt();
		while(T-->0){
		    int N=s.nextInt();
		    long ans=power(2,N-1);
		    ans=ans%1000000007;
		    System.out.println(ans);
		}
	}
}