/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Apple {
	void sieveOfEratosthenes(int n) {

		boolean prime[] = new boolean[n + 1];
		for (int i = 0; i <= n; i++)
			prime[i] = true;

		for (int p = 2; p * p <= n; p++) {

			if (prime[p] == true) {

				for (int i = p * p; i <= n; i += p)
					prime[i] = false;
			}
		}

		for (int i = 2; i <= n; i++) {
			if (prime[i] == true)
				System.out.print(i + " ");
		}
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while (T > 0) {
			int n = sc.nextInt();

			Apple g = new Apple();
			g.sieveOfEratosthenes(n);
			T--;
		}
	}
}