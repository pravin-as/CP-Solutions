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
			int T = sc.nextInt();
			while (T > 0) {
				int K = sc.nextInt();
				
				for (int i = K; i > 0; i--) {
					for (int j = (2 * i) - 1; j > 0; j--) {
						System.out.print(K-i+1);
					
					}
					System.out.println();
				}
				for (int i = 2; i <=K; i++) {
					for (int j =  1; j <=(2 * i) - 1; j++) {
						System.out.print(i+K-1);
					}
					System.out.println();
				}
				
				

				T--;
			}
		} catch (Exception e) {
			return;
		}

	}

}
