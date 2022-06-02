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
			long T = sc.nextLong();
			while (T > 0) {
				long N = sc.nextLong();
				long k = (long) (Math.log10(N) / Math.log10(2));
				System.out.println(k + 1);
				T--;
			}
		} catch (Exception e) {
			return;
		}

	}

}
