//This code is written by प्रविण शंखपाळ 



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Comparator;
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

				int R = fr.nextInt();
				int C = fr.nextInt();

				int A[][] = new int[R][C];

				for (int i = 0; i < R; i++) {

					for (int j = 0; j < C; j++) {

						A[i][j] = fr.nextInt();

					}

				}

				int q = fr.nextInt();

				while (q > 0) {

					String x = fr.next();

					if (x.equals("a")) {

						int x1 = fr.nextInt();
						int y1 = fr.nextInt();
						int val = fr.nextInt();

						A[x1 - 1][y1 - 1] = val;

					} else if (x.equals("b")) {

						int x1 = fr.nextInt();
						int y1 = fr.nextInt();
						int x2 = fr.nextInt();
						int y2 = fr.nextInt();

						long count = 0;

						for (int i = x1 - 1; i <= x2 - 1; i++) {

							for (int j = y1 - 1; j <= y2 - 1; j++) {

								count += A[i][j];

							}

						}

						System.out.println(count);

					}

					q--;
				}

				T--;
			}

		} catch (Exception e) {
			return;
		}
	}

	static class Pair implements Comparable<Pair> {
		int a, b;

		Pair(int a, int b) {
			this.a = a;
			this.b = b;
		}

		public int compareTo(Pair o) {
			// TODO Auto-generated method stub
			if (this.a != o.a)
				return Integer.compare(this.a, o.a);
			else
				return Integer.compare(this.b, o.b);
			// return 0;
		}

		public boolean equals(Object o) {
			if (o instanceof Pair) {
				Pair p = (Pair) o;
				return p.a == a && p.b == b;
			}
			return false;
		}

	}

	static int binarySearch(int arr[], int first, int last, int key) {
		int mid = (first + last) / 2;
		while (first <= last) {
			if (arr[mid] < key) {
				first = mid + 1;
			} else if (arr[mid] == key) {
				return mid;
			} else {
				last = mid - 1;
			}
			mid = (first + last) / 2;
		}
		return -1;
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
