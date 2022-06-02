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
			while (T != 0) {
				int N = sc.nextInt();
				int A[] = new int[10000];
				int B[] = new int[10000];
			long sum = 0;
				for (int i = 0; i < 10000; i++) {
					if (i < N) {
						A[i] = sc.nextInt();
					} else {
						A[i] = 0;
					}

				}for (int i = 0; i < 10000; i++) {
				   B[i]=0;

				}
				
				
				for (int i = 0; i < 10000; i++) {
					B[A[i]]++;

				}
				for (int i = 1; i < 10000; i++) {
					B[i] = B[i] / 2;

				}
				for (int i = 1; i < 10000; i++) {
					sum += B[i];

				}
				System.out.println(sum / 2);

				T--;
			}

		} catch (Exception e) {
			return;
		}
	}
}
