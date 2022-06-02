/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
 class FairchildTangerine {

	public static void main(String[] args) {
		try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();

			while (T-- > 0) {

				int n = sc.nextInt();
				long A[] = new long[1001];

				A[0] = 1;
				A[1] = 2;
				A[2] = 4;

				for (int i = 3; i <= n; i++) {
					A[i] = A[i - 3] + A[i - 2] + A[i - 1];
				}
				
				System.out.println(A[n]);

			}
		} catch (

		Exception e) {
			return;

		}
	}
}