/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class FairchildTangerine {

	public static void main(String[] args) {
		try {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();

		while (T-- > 0) {

			int n = sc.nextInt();

			int count = 0;
			boolean flag = false;

			String[] input = new String[n];
			for (int i = 0; i < n; i++) {
				input[i] = sc.next();
			}

			if (input[0].equals("stop")) {
				System.out.println(404);
			} else if (!(input[0].equals("stop"))) {
				for (int i = 0; i < n - 1; i++) {
					if (input[i].equals("stop") && input[i+1].equals("stop")) {
						System.out.println(404);
						flag = true;
						break;
					}
				}
				if (!flag) {
					System.out.println(200);
				}
			}

		}
		} catch (

		Exception e) {
			return;

		}
	}
}