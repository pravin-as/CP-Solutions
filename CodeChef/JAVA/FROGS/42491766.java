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
				int t1 = 0;
				int t2 = 0;
				int t3 = 0;
				int t4 = 0;
				int count = 0;
				int A[] = new int[20];
				int B[] = new int[20];
				for (int i = 0; i < 20; i++) {
					A[i] = 0;
				}
				for (int i = 0; i < 20; i++) {
					B[i] = 0;
				}
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();
				}

				for (int i = 0; i < N; i++) {
					B[i] = sc.nextInt();
				}

				for (int i = 0; i < N; i++) {
					if (A[i] == 1) {
						t1 = i;
					}
					if (A[i] == 2) {
						t2 = i;
					}
					if (A[i] == 3) {
						t3 = i;
					}
					if (A[i] == 4) {
						t4 = i;
					}
				}

				for (int i = 0; i < N; i++) {
					if (A[i] == 2) {
						if (i <= t1) {
							while (t2 <= t1) {
								t2 += B[i];
								count++;

							}
							break;
						} else
							break;
					}
				}

				for (int i = 0; i < N; i++) {
					if (A[i] == 3) {
						if (i <= t2) {
							while (t3 <= t2) {
								t3 += B[i];
								count++;

							}
							break;
						} else
							break;
					}
				}

				for (int i = 0; i < N; i++) {
					if (A[i] == 4) {
						if (i <= t3) {
							while (t4 <= t3) {
								t4 += B[i];
								count++;

							}
							break;
						} else
							break;
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
