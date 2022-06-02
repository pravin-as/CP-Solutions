//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
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

public class Ginny_Weasley {

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

			int t = fr.nextInt();

			while (t > 0) {

				int n = fr.nextInt();
				String a = "";

				int x1 = -1, y1 = -1, x2 = -1, y2 = -1, x3 = 0, y3 = 0, x4 = 0, y4 = 0;

				for (int i = 0; i < n; i++) {

					a = fr.next();

					for (int j = 0; j < n; j++) {

						if (a.charAt(j) == '*') {

							if (x1 == -1 && y1 == -1) {

								y1 = i;
								x1 = j;

							} else {

								y2 = i;
								x2 = j;

							}

						}

					}

				}

				if (y1 == y2) {

					x3 = x1;
					x4 = x2;

					if (y1 - 1 >= 0) {

						y3 = y1 - 1;
						y4 = y1 - 1;

					} else {

						y3 = y1 + 1;
						y4 = y1 + 1;

					}

				} else if (x1 == x2) {

					y3 = y1;
					y4 = y2;

					if (x1 - 1 >= 0) {

						x3 = x1 - 1;
						x4 = x1 - 1;

					} else {

						x3 = x1 + 1;
						x4 = x1 + 1;

					}

				} else {

					x3 = x1;
					x4 = x2;
					y3 = y2;
					y4 = y1;

				}

				for (int i = 0; i < n; i++) {

					for (int j = 0; j < n; j++) {

						if ((j == x3 && i == y3) || (j == x4 && i == y4) || (i == y1 && j == x1)
								|| (i == y2 && j == x2)) {

							System.out.print("*");

						} else {

							System.out.print(".");

						}

					}
					System.out.println();

				}

				t--;
			}

		} catch (

		Exception e) {
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
