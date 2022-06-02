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

				char a[] = str.toCharArray();
				Arrays.sort(a);

				String res = "helloworld";
				char b[] = res.toCharArray();
				Arrays.sort(b);

				boolean flag = true;

				if (str.length() != 10) {
					flag = false;
				} else {
					for (int i = 0; i < 10; i++) {
						if (a[i] != b[i]) {
							flag = false;
						}
					}
				}

				if (flag) {
					System.out.println("Yes");
				} else {
					System.out.println("No");
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}