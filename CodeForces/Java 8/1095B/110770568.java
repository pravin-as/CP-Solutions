//This code is written by प्रविण शंखपाळ 


// FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA FUCK JAVA 

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
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

	void merge(int arr[], int l, int m, int r) {

		int n1 = m - l + 1;
		int n2 = r - m;

		int L[] = new int[n1];
		int R[] = new int[n2];

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

	void sort(int arr[], int l, int r) {
		if (l < r) {

			int m = l + (r - l) / 2;

			sort(arr, l, m);
			sort(arr, m + 1, r);

			merge(arr, l, m, r);
		}
	}

	static void printArray(int arr[]) {
		int n = arr.length;
		for (int i = 0; i < n; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();

			int n = fr.nextInt();

			int A[] = new int[n];

			for (int i = 0; i < n; i++) {

				A[i] = fr.nextInt();

			}

			Luna_Lovegood ob = new Luna_Lovegood();
	        ob.sort(A, 0, A.length - 1);

			System.out.println(Math.min(A[n - 2] - A[0], A[n - 1] - A[1]));

		} catch (

		Exception e) {
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
