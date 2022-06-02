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
			for (int i = 0; i < N; i++) {
				A[i] = sc.nextInt();
			}
			Arrays.sort(A);
			for (int i = 0; i < N; i++) {
				System.out.print(A[i] + " ");
			}

		}
		} catch (Exception e) {
			return;
		}

	}
}
