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
				int N = sc.nextInt();
				int K = sc.nextInt();
				int M = sc.nextInt();

				long count = 0;

				long A[] = new long[N];
				long B[] = new long[N];

				for (int i = 0; i < N; i++) {
					A[i] = sc.nextLong();
				}

				for (int i = 0; i < N; i++) {
					B[i] = sc.nextLong();
				}

				for (int i = 0; i < N; i++) {

					if (Math.abs(A[i] - B[i]) > K) {
						count++;
					}
				}

				if (count <= M) {
					System.out.println(1);
				} else {
					System.out.println(0);
				}System.out.println();
				
				

			}
		} catch (

		Exception e) {
			return;

		}
	}
}