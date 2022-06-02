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
			int t = sc.nextInt();

			while (t > 0) {
				int N = sc.nextInt();
				int A[] = new int[N];
				long even = 0;
				long odd = 0;
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();
				}
				for (int i = 0; i < N; i++) {
					if (A[i] % 2 == 0) {
						even++;
					} else if (A[i] % 2 == 1) {
						odd++;
					}
				}

				System.out.println(Math.min(even, odd));

				t--;
			}
		} catch (Exception e) {
			return;
		}

	}

}
