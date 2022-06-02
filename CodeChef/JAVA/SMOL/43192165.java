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
import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.stream.IntStream;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
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

	public static void expand(String str, int low, int high, Set<String> set) {

		while (low >= 0 && high < str.length() && str.charAt(low) == str.charAt(high)) {

			set.add(str.substring(low, high + 1));

			low--;
			high++;
		}
	}

	public static void allPalindromicSubstrings(String str) {

		Set<String> set = new HashSet<>();

		for (int i = 0; i < str.length(); i++) {

			expand(str, i, i, set);

			expand(str, i, i + 1, set);
		}

		System.out.print(set);
	}

	public static void main(String[] args) {
		try {

			FastReader s = new FastReader();
			int T = s.nextInt();

			while (T > 0) {

			long N = s.nextLong();
				long K = s.nextLong();
				if (K != 0) {
					System.out.println(N - (N / K) * K);
				} else {
					System.out.println(N);
				}
				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}