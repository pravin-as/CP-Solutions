/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.StringTokenizer;

 class Apple {
	static class FastReader {
		BufferedReader br;
		StringTokenizer st;

		public FastReader() {
			br = new BufferedReader(new InputStreamReader(System.in));
		}

		String next() {
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		long nextLong() {
			return Long.parseLong(next());
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		String nextLine() {
			String str = "";
			try {
				str = br.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}

	public static void main(String args[]) {

		try {

			FastReader s = new FastReader();

			int T = s.nextInt();

			while (T > 0) {

				int N = s.nextInt();

				long A[] = new long[N];

				for (int i =0; i < N; i++) {

					A[i] = s.nextLong();

				}

				Arrays.sort(A);

				System.out.println(Math.max((A[1] - 1) * (A[0] + 1) + 1, (A[N - 1] - 1) * (A[N - 2] + 1) + 1));

				T--;
			}

		} catch (

		Exception e) {
			return;

		}
	}
}
