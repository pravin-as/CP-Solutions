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
import javafx.util.Pair;

public class Luna_Lovegood {

//	static int cntSubDivK(int arr[], int N, int K, int rem, int[][] dp) {
//
//		if (N == 0) {
//
//			return rem == 0 ? 1 : 0;
//		}
//
//		if (dp[N][rem] != -1) {
//			return dp[N][rem];
//		}
//
//		int X = cntSubDivK(arr, N - 1, K, (rem * arr[N - 1]) % K, dp);
//
//		int Y = cntSubDivK(arr, N - 1, K, rem, dp);
//
//		return X + Y;
//	}
//
//	static int UtilCntSubDivK(int arr[], int N, int K) {
//
//		int[][] dp = new int[N + 1][K + 1];
//
//		for (int i = 0; i < N + 1; i++) {
//			for (int j = 0; j < K + 1; j++)
//				dp[i][j] = -1;
//		}
//		return cntSubDivK(arr, N, K, 1, dp);
//	}

	public static void main(String[] args) {

//		try {
		FastReader fr = new FastReader();

		int n = fr.nextInt();

		long x = 0;

		int ans = 0;

		for (int i = 0; i <= 10000; i++) {

			x += ((i) * (i + 1)) / 2;
			if (x == n) {
				ans = i;
				break;
			} else if (x > n) {
				ans = i - 1;
				break;
			}

		}

		System.out.println(ans);

//		} catch (Exception e) {
//			return;
//		}

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
