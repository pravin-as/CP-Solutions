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
				long A[] = new long[N];
				long answer = 0;
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextLong();

				}
				Arrays.sort(A);
				if (N % 2 == 1) {
					answer = Math.abs(A[0] - A[N / 2]) + Math.abs(A[N / 2] - A[N - 1]) + Math.abs(A[N - 1] - A[0]);
				} else {
					long answer1 = Math.abs(A[0] - A[N / 2]) + Math.abs(A[N / 2] - A[N - 1])
							+ Math.abs(A[N - 1] - A[0]);
					long answer2 = Math.abs(A[0] - A[(N / 2) + 1]) + Math.abs(A[(N / 2) + 1] - A[N - 1])
							+ Math.abs(A[N - 1] - A[0]);
					answer = Math.max(answer1, answer2);
				}
				System.out.println(answer);
				T--;
			}

		} catch (

		Exception e) {
			return;
		}

	}
}