//This code is written by प्रविण शंखपाळ 

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Stack;
import java.util.Queue;
import java.util.PriorityQueue;
import java.util.List;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.TreeSet;
import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.Vector;


 class Ginny_Weasley {

	public static void main(String[] args) {
		try {
			FastReader fr = new FastReader();
			int T = fr.nextInt();

			while (T > 0) {

				int n = fr.nextInt();

				String C = Integer.toBinaryString(n);
				int length = C.length();

				String res = C.substring(1);

				for (int i = 0; i < length - 1; i++) {

					if (res.charAt(i) == '0') {
						res = res.substring(0, i) + '1' + res.substring(i + 1);
					} else if (res.charAt(i) == '1') {
						res = res.substring(0, i) + '0' + res.substring(i + 1);
					}

				}

				String A = "1" + res;

				String B = "0";

				for (int i = 0; i < length - 1; i++) {

					B += '1';

				}

				System.out.println((long) (Integer.parseInt(A, 2)) * (long) (Integer.parseInt(B, 2)));

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}

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
}
