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

				long x = sc.nextLong();
				if (x % 2 == 0) {
					System.out.println(0);
				} else {
					System.out.println(1);
				}
				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}
