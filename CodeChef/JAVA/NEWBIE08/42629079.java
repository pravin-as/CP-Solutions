/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Apple {

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();

		long arr[] = new long[N];

		long ans = 0;

		for (int i = 0; i < N; i++) {
			arr[i] = sc.nextLong();
		}

		for (int i = 0; i < N - 1; i++) {

			if (arr[i + 1] >= arr[i])
				continue;

			ans += arr[i] - arr[i + 1];
			arr[i + 1] = arr[i];

		}
		System.out.println(ans);

	}
}