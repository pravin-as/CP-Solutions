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

				int q = sc.nextInt();
				int p = sc.nextInt();

				long answer = p * q;

				if (q > 1000) {

					System.out.println(0.9 * answer);
				} else {
					System.out.println(answer);
				}

				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
