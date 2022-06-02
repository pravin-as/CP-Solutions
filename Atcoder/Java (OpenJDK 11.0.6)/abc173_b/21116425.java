//This code is written by प्रविण शंखपाळ 


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

  class Main {

	public static void main(String[] args) {

		try {
			FastReader fr = new FastReader();

			int n = fr.nextInt();

			int C0 = 0;
			int C1 = 0;
			int C2 = 0;
			int C3 = 0;

			String str[] = new String[n];

			for (int i = 0; i < n; i++) {

				str[i] = fr.next();

				if (str[i].equals("AC")) {
					C0++;

				} else if (str[i].equals("WA")) {
					C1++;
				} else if (str[i].equals("TLE")) {
					C2++;
				} else if (str[i].equals("RE")) {
					C3++;
				}

			}

			System.out.println("AC x " + String.valueOf(C0));
			System.out.println("WA x " + String.valueOf(C1));
			System.out.println("TLE x " + String.valueOf(C2));
			System.out.println("RE x " + String.valueOf(C3));

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
