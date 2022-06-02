/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
 class Endberry {

	static long minDifferenceAmongMaxMin(long arr[], int N, int K) {

		Arrays.sort(arr);

		long res = 2147483647;

		for (int i = 0; i <= (N - K); i++) {

			long curSeqDiff = arr[i + K - 1] - arr[i];
			res = Math.min(res, curSeqDiff);
		}

		return res;
	}

	public static void main(String[] args) {
		try {
			Scanner sc = new Scanner(System.in);

			int T = sc.nextInt();

			while (T > 0) {

				int N = sc.nextInt();
				int K = sc.nextInt();

				long arr[] = new long[N];

				for (int i = 0; i < N; i++) {
					arr[i] = sc.nextLong();
				}
				System.out.println(minDifferenceAmongMaxMin(arr, N, K));

				T--;
			}

		} catch (Exception e) {
			return;
		}
	}

}
