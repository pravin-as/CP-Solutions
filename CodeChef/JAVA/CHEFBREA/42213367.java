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
				int l = sc.nextInt();
				int b = sc.nextInt();
				int result = 0;
				for (int i = 1; i < Math.max(l, b); i++) {
					if (l % i == 0 && b % i == 0) {
						result = i;
					}
				}

				System.out.println((l * b) / (result * result));
				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}
