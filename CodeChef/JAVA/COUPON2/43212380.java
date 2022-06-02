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

				int D = s.nextInt();
				int C = s.nextInt();

				long day1 = 0;
				long day2 = 0;

				for (int i = 0; i < 3; i++) {
					day1 += s.nextInt();
				}

				for (int i = 0; i < 3; i++) {
					day2 += s.nextInt();
				}

				long x = 0;
				long y = 0;

				if (day1 < 150 && day2 < 150) {
					x = day1 + day2 + 2 * D + C;
					y = day1 + day2 + 2 * D;
				} else if (day1 >= 150 && day2 >= 150) {
					x = day1 + day2 + C;
					y = day1 + day2 + 2 * D;
				} else {
					x = day1 + day2 + D + C;
					y = day1 + day2 + 2 * D;
				}

				if (x < y) {
					System.out.println("YES");
				} else {
					System.out.println("NO");
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}