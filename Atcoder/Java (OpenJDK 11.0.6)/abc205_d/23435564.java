//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.*;
import java.util.*;

class Main {

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			PrintWriter pt = new PrintWriter(System.out);

			int t = 1;

			while (t > 0) {

				int n = fr.nextInt(), q = fr.nextInt();

				long A[] = new long[n];
				for (int i = 0; i < n; i++) {
					A[i] = fr.nextLong();
				}

				long dp[] = new long[n];
				dp[0] = A[0] - 1;
				for (int i = 1; i < n; i++) {
					dp[i] = dp[i - 1] + A[i] - A[i - 1] - 1;
				}

//				for (long i : dp) {
//					pt.print(i + " ");
//				}
//				pt.println();

				while (q > 0) {

					long num = fr.nextLong();
					long index = (long) upper_bound(dp, 0, n, num);

					if (num < A[0]) {

						pt.println(num);

					} else if (num > A[n - 1]) {

						pt.println(num + n);

					} else {

						pt.println(num + index);
					}

//					pt.println(index);

					q--;
				}

				t--;
			}

			pt.close();

		} catch (

		Exception e) {
			return;
		}
	}

	static int lower_bound(long[] arr, int begin, int end, long tar) {
		while (begin < end) {
			int mid = begin + (end - begin) / 2;
			if (arr[mid] < tar)
				begin = mid + 1;
			else if (arr[mid] >= tar)
				end = mid;
		}
		return begin;
//		lower bound gives largest index of a number smaller than (if target is not present) or equal to target(if target is present) 
//      for complete array use begin = 0 and end = n
	}

	static int upper_bound(long[] arr, int begin, int end, long tar) {
		while (begin < end) {
			int mid = begin + (end - begin) / 2;
			if (arr[mid] < tar)
				begin = mid + 1;
			else if (arr[mid] >= tar)
				end = mid;
		}

		return begin;
//		upper bound gives smallest index of a number strictly greater than target
//	    for complete array use begin = 0 and end = n
	}

	static class Triple implements Comparable<Triple> {
		int a, b, c;

		Triple(int a, int b, int c) {
			this.a = a;
			this.b = b;
			this.c = c;
		}

		public int compareTo(Triple o) {
			// TODO Auto-generated method stub
			if (this.a != o.a)
				return Long.compare(this.a, o.a);
			else
				return Long.compare(this.b, o.b);
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

	static class Pairx<Pairx> {

		int a;
		String b;

		Pairx(int a, String b) {
			this.a = a;
			this.b = b;
		}

	}

	static void merge(long arr[], int l, int m, int r) {

		int n1 = m - l + 1;
		int n2 = r - m;

		long L[] = new long[n1];
		long R[] = new long[n2];

		for (int i = 0; i < n1; ++i)
			L[i] = arr[l + i];
		for (int j = 0; j < n2; ++j)
			R[j] = arr[m + 1 + j];

		int i = 0, j = 0;

		int k = l;
		while (i < n1 && j < n2) {
			if (L[i] <= R[j]) {
				arr[k] = L[i];
				i++;
			} else {
				arr[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1) {
			arr[k] = L[i];
			i++;
			k++;
		}

		while (j < n2) {
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	static void sort(long arr[], int l, int r) {
		if (l < r) {

			int m = l + (r - l) / 2;

			sort(arr, l, m);
			sort(arr, m + 1, r);

			merge(arr, l, m, r);
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
				return Long.compare(this.a, o.a);
			else
				return Long.compare(this.b, o.b);
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

	static int binarySearch(long arr[], int first, int last, long key) {
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
//		return -1;
		return mid;
//		return mid if want to find key greater than or less than arr[mid] if exact value is not given
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