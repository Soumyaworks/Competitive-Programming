import java.util.*;
public class Codeforces{
  public static boolean check(long n){
    while(n%2==0){
    n=n/2;
  }
  return (n==1)?true:false;
}

public static void main(String args[]){
  Scanner sc=new Scanner(System.in);
  long t,i,j,k,n;
  t=sc.nextLong();
  while(t-->0){
    n=sc.nextLong();
    if(check(n))
      System.out.println("NO");
    else
      System.out.println("YES");
  }
}
}
