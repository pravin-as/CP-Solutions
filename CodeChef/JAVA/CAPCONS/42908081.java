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

				str = str.toUpperCase();

				str = str.replace('A', 'a');
				str = str.replace('E', 'e');
				str = str.replace('I', 'i');
				str = str.replace('O', 'o');
				str = str.replace('U', 'u');

				System.out.println(str);

				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
