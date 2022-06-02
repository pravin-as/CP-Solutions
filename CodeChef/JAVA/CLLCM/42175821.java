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
				int A[] = new int[N];
				boolean flag = true;
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();
				}
				for (int i = 0; i < N; i++) {
					if (A[i] % 2 == 0) {
						flag = false;
					} else {
						continue;
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

