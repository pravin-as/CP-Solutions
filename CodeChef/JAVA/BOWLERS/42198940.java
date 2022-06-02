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
				int K = sc.nextInt();
				int L = sc.nextInt();

				if (K * L < N || (K == 1 && N != 1)) {
					System.out.println(-1);
				} else {

					while (N > 0) {
						int i = 1;
						while (i <= K) {

							System.out.print(i + " ");
							N--;
							i++;
							if (N <= 0) {
								break;
							}
						}
					}
					System.out.println();
				}
				T--;
			}

		} catch (

		Exception e) {
			return;
		}

	}
}
