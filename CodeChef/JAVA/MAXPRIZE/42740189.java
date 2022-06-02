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
		long M = sc.nextLong();

		long k = (int) (-1 + Math.sqrt(1 + 8 * M)) / 2;
		System.out.println(k);
		System.out.println();
		for (long i = 1; i < k; i++) {
			System.out.print(i + " ");
		}
		System.out.println(M - (k * (k - 1)) / 2);
	}

}
