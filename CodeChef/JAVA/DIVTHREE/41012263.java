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
				long K = sc.nextLong();
				long D = sc.nextLong();
				int[] A = new int[N];
				long sum = 0;
				long P = 0;

				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();

				}
				for (int i = 0; i < N; i++) {
					sum += A[i];

				}
				P = sum / K;
				if(P>D) {
					System.out.println(D);
				}else {
					System.out.println(P);
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}
	}

}