/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			while (T > 0) {

				int a = sc.nextInt();
				int b = sc.nextInt();
				int c = sc.nextInt();
				int r = sc.nextInt();

				if (a > b) {
					int temp = b;
					b = a;
					a = temp;
				}

				int result = 0;
				if (c + r < a || c - r > b) {
					result = 0;
				} else {
					if (c + r <= b) {
						if (c - r < a) {
							result = c + r - a;
						} else {
							result = c + r - (c - r);
						}
					} else {
						result = b - c + r;
					}
				}
				result = b - a - result;
				if (result < 0)
					result = 0;
				System.out.println(result);

			}
			T--;
		} catch (Exception e) {
			return;
		}

	}

}
