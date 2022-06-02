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


     class Luna_Lovegood {

//	static long A[] = new long[(int) 1e6 + 1];
//	static int mod = (int) 1e9 + 7;
//
//	static long fib(int n) {
//
//		A[0] = 0;
//		A[1] = 1;
//
//		for (int i = 2; i <= n; i++) {
//
//			A[i] = (A[i - 1] + A[i - 2]) % mod;
//
//		}
//
//		return A[n];
//
//	}

//	static long nCr(long n, int r) {
//
//		return (n) * (n - 1) / 2;
//
//	}

//	static void sieve() {
//
//		Arrays.fill(arr, true);
//
//		arr[0] = false;
//		arr[1] = false;
//		for (int i = 2; i * i <= ellie; i++) {
//			if (arr[i] == true) {
//				for (int j = i * i; j <= ellie; j += i)
//					arr[j] = false;
//			}
//		}
//		prime[0] = 0;
//		prime[1] = 0;
//		for (int i = 2; i <= ellie; i++) {
//			prime[i] = prime[i - 1];
//			if (arr[i]) {
//				prime[i]++;
//			} else {
//				continue;
//			}
//		}
//		;
//
//	}

	public static void main(String[] args) {

		try {
			FastReader fr = new FastReader();
			int T = fr.nextInt();

			while (T > 0) {

				int R = fr.nextInt();
				int C = fr.nextInt();
				int X = fr.nextInt();

				long A[][] = new long[R][C];
				long B[][] = new long[R][C];

				boolean flag = true;

				for (int i = 0; i < R; i++) {

					for (int j = 0; j < C; j++) {

						A[i][j] = fr.nextLong();

					}

				}

				for (int i = 0; i < R; i++) {

					for (int j = 0; j < C; j++) {

						B[i][j] = fr.nextLong();

					}

				}

				for (int i = 0; i < R; i++) {

					for (int j = 0; j <= C - X; j++) {

						if (A[i][j] != B[i][j]) {

							long ans = B[i][j] - A[i][j];

							A[i][j] += ans;

							for (int k = 1; k < X; k++) {

								A[i][j + k] += ans;

							}

						}
					}
				}

				for (int i = 0; i < C; i++) {

					for (int j = 0; j <= R - X; j++) {

						if (A[j][i] != B[j][i]) {

							long ans = B[j][i] - A[j][i];

							A[j][i] += ans;

							for (int k = 1; k < X; k++) {

								A[j + k][i] += ans;

							}

						}
					}
				}

				for (int i = 0; i < R; i++) {

					for (int j = 0; j < C; j++) {

						if (A[i][j] != B[i][j]) {

							flag = false;

							break;

						}
					}

				}

				System.out.println(flag ? "Yes" : "No");
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
