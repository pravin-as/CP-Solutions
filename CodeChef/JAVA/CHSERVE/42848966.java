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

		while (T > 0) {

			long P1 = sc.nextLong();

			long P2 = sc.nextLong();

			long K = sc.nextLong();

			long count = 0;

			if (((P2 + P1) / K) % 2 == 0) {

				System.out.println("CHEF");

			} else {

				System.out.println("COOK");

			}

			T--;
		}

		} catch (Exception e) {

			return;

		}

	}

}