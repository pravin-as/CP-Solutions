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

			int N = sc.nextInt();

			long c[] = new long[N + 2];

			long a[] = new long[N + 2];
			long n[] = new long[N + 2];
			n[1] = 0;
			for (int i = 1; i <= N; i++) {
				c[i] = sc.nextInt();

			}
			for (int i = 1; i <= N; i++) {
				a[i] = c[i] + n[i];
				n[i + 1] = Math.max(n[i], a[i]);
			}
			for (int i = 1; i <= N; i++) {
				System.out.print(a[i] + " ");
			}
		} catch (Exception e) {
			return;
		}
	}
}