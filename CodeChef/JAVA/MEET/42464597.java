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
			String[] a = sc.next().split(":");
			int p1 = Integer.parseInt(a[0]);
			int q1 = Integer.parseInt(a[1]);
			String b1 = sc.next();
			if (b1.charAt(0) == 'P' && p1 != 12) {
				p1 += 12;
			} else if (b1.charAt(0) == 'A' && p1 == 12) {
				p1 = 0;
			}

			int r1 = p1 * 60 + q1;
			int N = sc.nextInt();
			while (N > 0) {
				String[] x = sc.next().split(":");
				int p2 = Integer.parseInt(x[0]);
				int q2 = Integer.parseInt(x[1]);
				String b2 = sc.next();
				if (b2.charAt(0) == 'P' && p2 != 12) {
					p2 += 12;
				} else if (b2.charAt(0) == 'A' && p2 == 12) {
					p2 = 0;
				}
				int r2 = p2 * 60 + q2;

				String[] y = sc.next().split(":");
				int p3 = Integer.parseInt(y[0]);
				int q3 = Integer.parseInt(y[1]);
				String b3 = sc.next();
				if (b3.charAt(0) == 'P' && p3 != 12) {
					p3 += 12;
				} else if (b3.charAt(0) == 'A' && p3 == 12) {
					p3 = 0;
				}
				int r3 = p3 * 60 + q3;
				if ((r1 >= r2 && r1 < r3) || (r1 > r2 && r1 <= r3) || (r1 == r2 && r1 == r3)) {
					System.out.print(1);

				} else {
					System.out.print(0);
				}

				N--;
			}System.out.println();

			T--;
		}

		} catch (

		Exception e) {
			return;
		}

	}
}