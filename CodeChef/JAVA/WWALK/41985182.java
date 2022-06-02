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
			int N = sc.nextInt();
			int A[] = new int[N];
			int B[] = new int[N];
			long count = 0;
			long sum1 = 0;
		    long sum2 = 0;
			for (int i = 0; i < N; i++) {
				A[i] = sc.nextInt();
			}
			for (int i = 0; i < N; i++) {
				B[i] = sc.nextInt();
			}
			for (int i = 0; i < N; i++) {
				sum1 += A[i];
				sum2 += B[i];
//					System.out.println(sum1+" "+sum2);

				if (sum1 == sum2 && A[i] == B[i]) {
					count += A[i];

				} else {
					continue;
				}

			}

			System.out.println(count);
			T--;
		}
		} catch (

		Exception e) {
			return;
		}

	}

}