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
				if (N == 1) {
					int x = sc.nextInt();
					if (x >= 0) {
						System.out.println("YES");
					} else {
						System.out.println("NO");
					}
				}
				if (N == 2) {
					int x = sc.nextInt();
					int y = sc.nextInt();
					if (x + y >= 0) {
						System.out.println("YES");
					} else {
						System.out.println("NO");
					}
				}
				if (N > 2) {
					long count = 0;
					int A[] = new int[N];
					for (int i = 0; i < N; i++) {
						A[i] = sc.nextInt();
					}
					for (int i = 0; i < N; i++) {
						count += A[i];
					}
					if (count >= 0) {
						System.out.println("YES");
					} else {
						System.out.println("NO");
					}
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}
