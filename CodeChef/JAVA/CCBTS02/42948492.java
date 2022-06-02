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

				int n = sc.nextInt();

				int count = 0;
				boolean flag = true;

				String[] input = new String[n];
				for (int i = 0; i < n; i++) {
					input[i] = sc.next();
				}
				
				for(int i = 0;i<n;i++) {
					if(input[i].equals("start")||input[i].equals("restart")) {
						if(count<1) {
							count++;
						}
					}else {
						count--;
					}
					if(count<0) {
						flag = false;
					}
				
				}
				if(flag) {
					System.out.println(200);
				}else {
					System.out.println(404);
				}

				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}