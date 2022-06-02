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
			long T = sc.nextInt();
			while (T > 0) {
				int N = sc.nextInt();
				int count = 0;
				String str = Integer.toBinaryString(N);

				for (int i = 0; i < str.length(); i++) {
					if (str.charAt(i) == '1') {
						count += 1;
					}
				}
				if (count % 2 == 0) {
					System.out.println("Magical");
				} else {
					System.out.println("Non-Magical");
				}
				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}

