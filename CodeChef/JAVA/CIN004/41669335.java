/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    
     static int gcd(int a, int b) {
  if (b == 0)
        return a;
    return gcd(b, a % b);
	
	}
    
    
    
	public static void main (String[] args) throws java.lang.Exception
	{
		try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			while (T != 0) {

				int N = sc.nextInt();
				int P = sc.nextInt();
				long count = 0;
				
                  int a=1;

				for(a=1; a<=N; a++){
            if(gcd(a,P)==1)count++;
        }
                 System.out.println((count*(count-1))/2);
					

				T--;
			}
		} catch (Exception e) {
			return;
		}
	}
}