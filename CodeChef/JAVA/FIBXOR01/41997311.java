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

				long a = sc.nextLong();
				long b = sc.nextLong();
				long n = sc.nextLong();
				long c = 0;
				if (n % 3 == 0) {
					System.out.println(a);
				} else if (n % 3 == 1) {
					System.out.println(b);
				} else {
					System.out.println(a ^ b);
				}

				T--;
			}

		} catch (

		Exception e) {
			return;
		}

	}
}
