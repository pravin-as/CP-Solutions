//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.*;
import java.util.*;

class Dobby {

	static PrintWriter pt = new PrintWriter(System.out);
	static ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
	static long presentValue[] = new long[(int) 3e5 + 7];
	static long finalValue[] = new long[(int) 3e5 + 7];

	static long mod = (long) 1e9 + 7;

	static void dfs(int beta, int baap, int n) {

		for (Object i : adj.get(beta)) {

			if ((int) i == baap) {
				continue;
			}
			dfs((int) i, beta, n);

		}

		ArrayList<Pair> pr = new ArrayList<>();

		for (Object i : adj.get(beta)) {

			if ((int) i == baap) {
				continue;
			}

			Pair y = new Pair(finalValue[((int) i)], (int) i);

			pr.add(y);

		}

		Collections.sort(pr);
		Collections.reverse(pr);

		long pm = 1, ans = 1;

		for (Pair i : pr) {

			presentValue[(int) (i.b)] = pm;
			pm++;

		}

		for (Object i : adj.get(beta)) {

			if ((int) i == baap) {
				continue;
			}

			ans += presentValue[((int) i)] * finalValue[((int) i)];

			finalValue[(beta)] = ans;

		}

	}

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();

			int t = fr.nextInt();

			while (t > 0) {

				int n = fr.nextInt(), value = fr.nextInt();

				adj.clear();

				for (int i = 0; i <= n; i++) {
					presentValue[i] = (0);
					finalValue[i] = (1);
				}

				for (int i = 0; i <= n; i++) {

					ArrayList<Integer> x = new ArrayList<>();
					adj.add(x);

				}

				for (int i = 0; i < n - 1; i++) {

					int a = fr.nextInt(), b = fr.nextInt();

					adj.get(a).add(b);
					adj.get(b).add(a);

				}

				dfs(1, 0, n);

				pt.println(((long) (finalValue[(1)] % mod) * (long) (value % mod)) % mod);

				for (int i = 0; i < (int) 3e5 + 7; i++) {
					presentValue[i] = (0);
					finalValue[i] = (0);
				}

				t--;
			}

			pt.close();

		} catch (

		Exception e) {
			return;
		}
	}

	static class Pairx<Pairx> {

		ArrayList<Integer> b = new ArrayList<>();
		int a;

		Pairx(int a, ArrayList b) {
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
		long a, b;

		Pair(long a, long b) {
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
		return -1;
//		return mid;
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
