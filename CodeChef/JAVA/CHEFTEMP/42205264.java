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

			long A[] = new long[7];
			long B[] = new long[7];
			long count = 0;
			for (int i = 0; i < 7; i++) {
				A[i] = sc.nextLong();
			}
			for (int i = 0; i < 7; i++) {
				B[i] = sc.nextLong();
			}
			for (int i = 0; i < 7; i++) {
				count += Math.abs(A[i] - B[i]);
			}
			System.out.println(count);

		} catch (

		Exception e) {
			return;
		}

	}
}
