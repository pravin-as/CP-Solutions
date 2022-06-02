/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Apple {

	public static void main(String[] args) {

		try {

			Scanner sc = new Scanner(System.in);

			int N = sc.nextInt();

			long X = (N * (N + 1)) / 2;

			long sum = 0;

			for (int i = 0; i < N - 1; i++) {
				sum += sc.nextInt();
			}

			System.out.println(X - sum);

		} catch (Exception e) {

			return;

		}

	}

}
