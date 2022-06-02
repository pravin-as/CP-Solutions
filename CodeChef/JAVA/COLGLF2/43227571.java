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

				int TotalSeason = s.nextInt();

				long intro[] = new long[TotalSeason];

				for (int i = 0; i < TotalSeason; i++) {

					intro[i] = s.nextLong();

				}
				long sum = 0;
				for (int i = 0; i < TotalSeason; i++) {

					long X = s.nextLong();
					long len = 0;
					

					for (int j = 0; j < X; j++) {
                        len = s.nextInt();
						sum += len;

					}
					sum = sum - (X - 1) * intro[i];
					

				}
				System.out.println(sum);

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}
}