/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
 public static long sum_of_digits(long a) {
		long sum = 0;

		while (a > 0) {
			sum += a % 10;
			a /= 10;
		}

		return sum;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while (T > 0) {
			int n = sc.nextInt();

			long arrA[] = new long[n];
			long arrB[] = new long[n];
			int sumA = 0;
			int sumB = 0;

			for (int i = 0; i < n; i++) {
				arrA[i] = sc.nextLong();
				arrB[i] = sc.nextLong();

			}

			for (int i = 0; i < n; i++) {
				if (sum_of_digits(arrA[i]) > sum_of_digits(arrB[i])) {
					sumA += 1;
				} else if (sum_of_digits(arrA[i]) < sum_of_digits(arrB[i])) {
					sumB += 1;
				} else {
					sumA += 1;
					sumB += 1;
				}

				

			}
			if (sumA > sumB) {
				
				System.out.println(0 + " " + sumA);
			} else if (sumA < sumB) {
			
				System.out.println(1 + " " + sumB);
			} else if(sumA == sumB) {
				
				System.out.println(2 + " " + sumA);
			}


			T--;
		}

	}

}
