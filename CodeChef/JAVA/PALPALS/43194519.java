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

				String str = s.next();

				int n = str.length();

				char c[] = str.toCharArray();

				Arrays.sort(c);

				int j = 0;

				int arr[] = new int[n];

				for (int i = 0; i < n - 1; i++) {

					if (c[i] == c[i + 1]) {

						arr[j]++;

					} else {
						j++;
					}

				}

				for (int i = 0; i < j + 1; i++) {

					arr[i]++;
				}

				int count1 = 0;

				for (int i = 0; i < j + 1; i++) {

					if (arr[i] == 1) {
						count1++;
					}

				}

				int x = 0;

				for (int i = 0; i < j + 1; i++) {

					if (arr[i] % 2 == 0) {

						x += arr[i] / 2;

					} else if (arr[i] % 2 == 1 && arr[i] != 1) {

						x += (arr[i] - 3) / 2;
					}

				}

				if (x >= count1) {
					System.out.println("YES");
				} else {
					System.out.println("NO");
				}

				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}