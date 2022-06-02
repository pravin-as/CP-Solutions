/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class IndianGooseberry {

	public static int ans(String str) {
		int count = 0;
		int maxCount = 0;
		char previous = ' ';
		for (int i = 0; i < str.length(); i++) {
			char c = str.charAt(i);
			if (c == previous) {

				count++;
			} else {

				count = 1;
				previous = c;
			}
			maxCount = Math.max(maxCount, count);
		}
		return maxCount;
	}

	public static void main(String[] args) {
		try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			sc.nextLine();
			while (T > 0) {

				String str = sc.nextLine();
				System.out.println(ans(str));

				T--;
			}

		} catch (Exception e) {
			return;
		}
	}
}
