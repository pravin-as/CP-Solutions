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

				int x = sc.nextInt();

				int count = 0;

				int result = 0;

				if (x >= 90) {
					count = x - 90;
					result = 600 + count * 3;

				} else if (x >= 20 && x < 90) {

					count = x - 20;
					result = 180 + count * 6;

				} else {

					count = x - 0;
					result = count * 9;

				}

				int hr = result / 60;
				int min = result % 60;

				System.out.println(hr + ":" + min);

				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
