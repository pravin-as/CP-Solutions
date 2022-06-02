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

				int n = sc.nextInt();

				long a[] = new long[n];

				for (int i = 0; i < n; i++) {
					a[i] = sc.nextLong();
				}
				System.out.println();
				Arrays.sort(a);

				for (int i = 0; i < n; i++) {
					System.out.print(a[i] + " ");
				}
				System.out.println();
				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
