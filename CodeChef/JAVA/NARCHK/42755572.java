/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    try{
	Scanner sc = new Scanner(System.in);

		long M = sc.nextLong();
		long x = M;
		double N = Math.log10(M);
		int n = (int) N;
		long A[] = new long[n + 1];
		long answer = 0;

		for (int i = 0; i < n + 1; i++) {
			A[i] = M % 10;
			M = M / 10;
		}
		for (int i = 0; i < n + 1; i++) {
			answer += Math.pow(A[i], n + 1);
		}
		
		if(answer==x) {
			System.out.println("Yes");
		}else {
			System.out.println("No");
		}
		
		
	    }catch(Exception e){
	        return;
	    }

	}

}
