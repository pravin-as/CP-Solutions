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
			while (T >= 0) {

				int N = sc.nextInt();
				int A[] = new int[N];
				int B[] = new int[N];
				long count = 0;

				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();
				}

				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						if (A[j] == i + 1) {
							B[i] = j;
						}
					}
				}

				for (int i = 0; i < N - 1; i++) {
					count += Math.abs(B[i] - B[i + 1]);
				}
				System.out.println(count + B[0]);
				T--;
			}
		} catch (Exception e) {
			return;
		}

	}
}
