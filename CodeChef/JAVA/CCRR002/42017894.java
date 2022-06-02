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
				int l = sc.nextInt();
				if (l == 1) {
					for (int i = 1; i < 10; i++) {
						System.out.println(i);
					}
				} else if (l == 2) {
					for (int i = 11; i < 100; i++) {
						if (String.valueOf(i).contains("0")) {
							continue;
						} else {
							System.out.println(i);
						}

					}
				} else if (l == 3) {
					for (int i = 111; i < 1000; i++) {
						if (String.valueOf(i).contains("0")) {
							continue;
						} else {
							System.out.println(i);
						}
					}
				} else if (l == 4) {
					for (int i = 1111; i < 10000; i++) {
						if (String.valueOf(i).contains("0")) {
							continue;
						} else {
							System.out.println(i);
						}
					}
				} else if (l == 5) {
					for (int i = 11111; i < 100000; i++) {
						if (String.valueOf(i).contains("0")) {
							continue;
						} else {
							System.out.println(i);
						}
					}
				} else if (l == 6) {
					for (int i = 111111; i < 1000000; i++) {
						if (String.valueOf(i).contains("0")) {
							continue;
						} else {
							System.out.println(i);
						}
					}
				}

				t--;
			}
		} catch (Exception e) {
			return;
		}

	}

}

