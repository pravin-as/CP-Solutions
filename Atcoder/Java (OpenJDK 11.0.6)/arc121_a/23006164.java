//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			PrintWriter pt = new PrintWriter(System.out);

			int t = 1;

			while (t > 0) {

				int n = fr.nextInt();

				ArrayList<Pair> base = new ArrayList<>();
				ArrayList<Pair> xy = new ArrayList<>();
				ArrayList<Pair> yx = new ArrayList<>();

				for (int i = 0; i < n; i++) {
					Pair pr = new Pair(fr.nextInt(), fr.nextInt());
					base.add(pr);
				}

				for (int i = 0; i < n; i++) {

					Pair p1 = new Pair(base.get(i).a, base.get(i).b);
					Pair p2 = new Pair(base.get(i).b, base.get(i).a);

					xy.add(p1);
					yx.add(p2);

				}

				Collections.sort(xy);
				Collections.sort(yx);

				Pair xy1 = new Pair(xy.get(0).a, xy.get(0).b);
				Pair xy1e = new Pair(xy.get(n - 1).a, xy.get(n - 1).b);
				Pair xy2 = new Pair(xy.get(1).a, xy.get(1).b);
				Pair xy2e = new Pair(xy.get(n - 2).a, xy.get(n - 2).b);

				long xy1_1e = Math.abs((long) xy1.a - (long) xy1e.a);
				long xy1_2e = Math.abs((long) xy1.a - (long) xy2e.a);
				long xy2_1e = Math.abs((long) xy2.a - (long) xy1e.a);

				long xyBig = xy1_1e;
				long xySmall = xy1_2e >= xy2_1e ? xy1_2e : xy2_1e;

				Pair yx1 = new Pair(yx.get(0).a, yx.get(0).b);
				Pair yx1e = new Pair(yx.get(n - 1).a, yx.get(n - 1).b);
				Pair yx2 = new Pair(yx.get(1).a, yx.get(1).b);
				Pair yx2e = new Pair(yx.get(n - 2).a, yx.get(n - 2).b);

				long yx1_1e = Math.abs((long) yx1.a - (long) yx1e.a);
				long yx1_2e = Math.abs((long) yx1.a - (long) yx2e.a);
				long yx2_1e = Math.abs((long) yx2.a - (long) yx1e.a);

				long yxBig = yx1_1e;
				long yxSmall = yx1_2e >= yx2_1e ? yx1_2e : yx2_1e;

				long ans = 0;

				if ((xy1.a == yx1.b && xy1.b == yx1.a && xy1e.a == yx1e.b && xy1e.b == yx1e.a)
						|| (xy1.a == yx1e.b && xy1.b == yx1e.a && xy1.a == yx1e.b && xy1.b == yx1e.a)) {

					if (xyBig > yxBig) {

						ans = xySmall;

					} else {

						ans = yxSmall;

					}

				} else {

					if (xyBig > yxBig) {

						if (yxBig > xySmall) {

							ans = yxBig;

						} else {

							ans = xySmall;

						}

					} else {

						if (xyBig > yxSmall) {

							ans = xyBig;

						} else {

							ans = yxSmall;

						}
					}
				}

				pt.println(ans);

				t--;
			}

			pt.close();

		} catch (

		Exception e) {
			return;
		}
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