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
			sc.nextLine();
			while (t > 0) {

				String str = sc.nextLine();
				int count = 0;

				for (int i = 0; i < str.length() - 1; i++) {

					if (str.charAt(i) == 'x') {
						if (str.charAt(i + 1) == 'y') {
							count++;
							i++;
						}
					} else if (str.charAt(i) == 'y') {
						if (str.charAt(i + 1) == 'x') {
							count++;
							i++;
						}
					}
				}
				
				System.out.println(count);

				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
