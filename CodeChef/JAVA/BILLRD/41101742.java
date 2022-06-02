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

			while (T != 0) {
				long N = sc.nextLong();
				long K = sc.nextLong();
				long x = sc.nextLong();
				long y = sc.nextLong();
				long resultx = 0;
				long resulty = 0;
				if (x == y) {
					resultx = N;
					resulty = N;

				} else if (x > y) {
					if (K % 4 == 1) {
						resultx = N;
						resulty = y + N - x;

					} else if (K % 4 == 2) {
						resultx = N - x + y;
						resulty = N;

					} else if (K % 4 == 3) {
						resultx = 0;
						resulty = x - y;

					} else if (K % 4 == 0) {
						resultx = x - y;
						resulty = 0;

					}
				} else if (x < y) {
					if (K % 4 == 1) {
						resultx = x + N - y;
						resulty = N;

					} else if (K % 4 == 2) {
						resultx = N;
						resulty = N + x - y;

					} else if (K % 4 == 3) {
						resultx = y - x;
						resulty = 0;

					} else if (K % 4 == 0) {
						resultx = 0;
						resulty = y - x;
					}

				}
				System.out.println(resultx + " " + resulty);

				T--;
			}

		} catch (Exception e) {
			return;
		}
	}
}

