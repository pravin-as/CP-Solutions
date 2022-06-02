//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.*;
import java.util.*;

class Main {

	static long mod = (long) 1e9 + 7;

	public static void main(String[] args) {

//		try {

		FastReader fr = new FastReader();
		PrintWriter pt = new PrintWriter(System.out);

		int t = 1;

		while (t > 0) {

			int n = fr.nextInt();

			HashSet<Long> index = new HashSet<>();

			long A[] = new long[n];
			for (int i = 0; i < n; i++) {
				A[i] = fr.nextLong();
				index.add(A[i]);
			}

			HashMap<Long, Long> x = new HashMap<>();

			for (int i = 0; i < n; i++) {
				if (x.containsKey(A[i])) {
					x.put(A[i], x.get(A[i]) + 1);
				} else {
					x.put(A[i], (long) 1);
				}
			}

//			pt.println(x);
//			pt.println(index);

			long same = 0;

			for (long i : index) {

				long k = x.get(i);

				same += (k * (k - 1)) / 2;

			}

			pt.println(((long) (n * (long) (n - 1)) / 2 - same));

			t--;
		}
		pt.close();

//		} catch (
//
//		Exception e) {
//			return;
//		}
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
			if (arr[mid] <= tar)
				begin = mid + 1;
			else if (arr[mid] > tar)
				end = mid;
		}

		return begin;
//		upper bound gives smallest index of a number strictly greater than target
//	    for complete array use begin = 0 and end = n
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
		long a;
		String b;

		Pair(long a, String b) {
			this.a = a;
			this.b = b;
		}

		public int compareTo(Pair o) {
			// TODO Auto-generated method stub
//			if (this.a != o.a)
			return Long.compare(this.a, o.a);
//			else
//				return Integer.compare(this.b, o.b);
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
