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

		while (T > 0) {

			int N = sc.nextInt();

			int count = 0;

			int A[] = new int[N];

			int B[] = new int[N];

			for (int i = 0; i < N; i++) {

				A[i] = sc.nextInt();

				B[i] = sc.nextInt();

			}

			for (int i = 0; i < N; i++) {

				if (B[i] - A[i] > 5) {

					count++;

				}

			}

			System.out.println(count);

			T--;
		}

		} catch (Exception e) {
			
			return;
			
		}

	}

}
