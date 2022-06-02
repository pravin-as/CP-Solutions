/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Apple {

	public static void main(String args[]) {

		try {

			Scanner sc = new Scanner(System.in);

			int t = sc.nextInt();
			while (t > 0) {

				int n = sc.nextInt();
				int k = sc.nextInt();

				int A[] = new int[n];

				long count1 = 0;

				long count2 = 0;

				for (int i = 0; i < n; i++) {

					A[i] = sc.nextInt();
					count1 += A[i];

				}

				for (int i = 0; i < n; i++) {

					if (A[i] > k) {
						A[i] = k;
					}
				}

				for (int i = 0; i < n; i++) {

					count2 += A[i];
				}
				System.out.println(count1 - count2);
				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
