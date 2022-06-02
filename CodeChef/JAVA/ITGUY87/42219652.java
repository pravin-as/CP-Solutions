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

				for (int i = 1; i <= N; i++) {

					for (int j = 1; j <= i; j++) {
						if (j % 2 == 0) {
							System.out.print('#');
						} else {
							System.out.print('*');
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
