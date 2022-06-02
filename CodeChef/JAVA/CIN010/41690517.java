/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			while (T > 0) {
				long m = sc.nextLong();
				long n = sc.nextLong();
				int a =1;

				 for (long i = m; i <= n; i++) {
					 
			            if (i == 1 || i == 0){
                                 continue;}
			             a = 1;
			 
			            for (long j = 2; j <= (int)Math.sqrt(i); j++) {
			                if (i % j == 0) {
			                    a = 0;
			                    break;
			                }
			            }
			 
			           
			            if (a == 1){
			                System.out.print(i+" ");}

			}
                  System.out.println();
			T--;
		} }catch (Exception e) {
			return;
		}

	}

}