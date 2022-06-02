/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
 class Jackfruit {

	static int a = 26;

	static void ans(String str1, String str2) {

		int present[] = new int[a];
		for (int i = 0; i < a; i++) {
			present[i] = 0;
		}

		int l1 = str1.length();
		int l2 = str2.length();

		long count = 0;

		for (int i = 0; i < l1; i++) {
			present[str1.charAt(i) - 'a'] = 1;
		}

		for (int i = 0; i < l2; i++) {

			if (present[str2.charAt(i) - 'a'] == 1 || present[str2.charAt(i) - 'a'] == -1) {
				present[str2.charAt(i) - 'a'] = -1;
			}

			else {
				present[str2.charAt(i) - 'a'] = 2;
			}
		}

		for (int i = 0; i < a; i++) {
			if (present[i] == 1 || present[i] == 2) {

				count++;
			}
		}
		System.out.println(count);
	}

	public static void main(String[] args) {
		try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			sc.nextLine();

			while (T-- > 0) {
				String str1 = sc.nextLine();
				String str2 = sc.nextLine();
				ans(str1, str2);
			}
		} catch (

		Exception e) {
			return;

		}
	}
}