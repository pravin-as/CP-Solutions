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
			int K = N;
			for (int i = 1; i <= N; i++) {
				for (int j = 1; j <= N; j++) {
					if (K == j) {
						System.out.print('*');
						K--;

					} else {
						System.out.print(j);
					}
				}
				System.out.println();
			}
			T--;
		}

		} catch (Exception e) {
			return;
		}

	}
}
