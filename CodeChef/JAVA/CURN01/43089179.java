/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.stream.IntStream;
import java.math.BigInteger;

 class FairchildTangerine {

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

	public static void main(String[] args) {
		try {

			FastReader s = new FastReader();
			int T = s.nextInt();

			while (T > 0) {

				int n = s.nextInt();

				String str = s.next();

				str = str.toLowerCase();

				char arr[] = str.toCharArray();

				Arrays.sort(arr);

				int count = 0;

				for (int i = 0; i < n - 1; i++) {

					if (arr[i] != arr[i + 1]) {
						count++;
					}

				}

				if ((count + 1) % 2 == 0) {
					System.out.println("SPAM");
				} else {
					System.out.println("AVENGER");
				}

				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}