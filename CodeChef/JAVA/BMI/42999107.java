/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
 class Pineapple {

	public static void main(String[] args) {
		try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();

			while (T > 0) {

				

				int M = sc.nextInt();
				int H = sc.nextInt();

				int result = M / (H * H);

				if (result <= 18) {
					System.out.println(1);
				} else if (result >= 19 && result <= 24) {
					System.out.println(2);
				} else if (result >= 25 && result <= 29) {
					System.out.println(3);
				} else if (result >= 30) {
					System.out.println(4);
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}
