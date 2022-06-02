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
				int a = sc.nextInt();
				int d = sc.nextInt();
				int k = sc.nextInt();
				int n = sc.nextInt();
				int inc = sc.nextInt();
				long sum = a;
				for (int i = 1; i < n; i++) {
					sum = sum + d;
					if ((i + 1) % k == 0) {
						d = d + inc;
					}
				}
				System.out.println(sum);
				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}

