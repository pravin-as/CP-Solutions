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
				boolean flag = true;

				long count = 0;
				long B[] = new long[N];
				for (int i = 0; i < N; i++) {
					B[i] = sc.nextLong();
				}
				for (int i = 0; i < N; i++) {
					if ((i + 1) % B[i] != 0) {
						flag = false;
						break;
					}
				}

				if (flag) {
					System.out.println("YES");
				} else {
					System.out.println("NO");
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}
