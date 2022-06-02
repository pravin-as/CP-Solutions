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
				int K = sc.nextInt();
				for (int i = 0; i < (2 * K) - 1; i++) {
					for (int j = 0; j < (2 * K) - 1; j++) {
						System.out.print(K - Math.min(Math.min(i, j), Math.min((2 * K) - i - 2, (2 * K) - j - 2)));
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
