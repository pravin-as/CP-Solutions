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
			long T = sc.nextLong();
			while (T > 0) {
				int N = sc.nextInt();
				int K = sc.nextInt();
				int A[] = new int[N];
				long count = 0;
				long sum = 0;
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();
				}
				for (int i = 0; i < N; i++) {
					if (A[i] > K) {
						count += 1;
						sum += A[i];
					}
				}
				System.out.println(sum - K * count);
				T--;
			}
		} catch (Exception e) {
			return;
		}

	}
}

