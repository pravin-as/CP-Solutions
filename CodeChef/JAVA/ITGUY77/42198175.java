/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			while (T > 0) {
				int K = sc.nextInt();

				for (int i = 1; i <= K; i++) {
					for (int j = 1; j <= 2 * K - 1; j++) {
						if (j <= K - i || j > K + i - 1) {
							System.out.print(" ");
						} else {
							if (j % 2 == 0) {
								System.out.print('A');
							} else {
								System.out.print('*');

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
