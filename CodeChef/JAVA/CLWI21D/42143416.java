/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{try {
			Scanner sc = new Scanner(System.in);
			long T = sc.nextInt();
			while (T > 0) {
				long N = sc.nextLong();
				double x = Math.floor((1 + Math.sqrt(1 + 8 * N)) / 2);
				long y = (long) x;
				long z = y - 1;
				long result = (z * (z + 1) * (2 * z + 1)) / 6;
				long result2 = N - (z * (z + 1)) / 2;
				long result3 = result2 * y;
				System.out.println(result + result3);

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}