/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	try {
			Scanner sc = new Scanner(System.in);
			long T = sc.nextLong();

			while (T > 0) {

				int N = sc.nextInt();
				long A[] = new long[N];
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextLong();
				}
				int x = sc.nextInt();
				int y = sc.nextInt();
				BigInteger f = new BigInteger("1");

				for (int i = x; i < y; i++) {
					f = f.multiply(BigInteger.valueOf(A[i]));

				}
				f = f.mod(BigInteger.valueOf(1000000007));
				System.out.println(f);
				T--;
			}
		} catch (Exception e) {
			return;
		}

	}
}
