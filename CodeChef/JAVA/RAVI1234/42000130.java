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
		long i, n, maxi = -1, t = 0, l=0, p;
		n = sc.nextLong();
		for (i = 0; i < n; i++) {
			p = sc.nextLong();
			if (i == 0) {
				l = p;
				t++;
			} else if (p == l)
				t++;

			else {
				l = p;
				if (t > maxi)
					maxi = t;
				t = 1;
			}

		}
		if (t > maxi)
			maxi = t;

		System.out.println(maxi);

	}

}
