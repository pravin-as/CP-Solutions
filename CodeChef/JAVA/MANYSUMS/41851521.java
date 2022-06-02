/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		long T = sc.nextLong();
		while (T > 0) {
			long L = sc.nextLong();
			long R = sc.nextLong();
			System.out.println(2 * R - 2 * L + 1);

			T--;
		}

	}
}

