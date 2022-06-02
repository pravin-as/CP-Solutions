//This code is written by प्रविण शंखपाळ 



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
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


class Dobby {

	static ArrayList<String> ans;

	public static void permute(String a, String b) {
		if (a.length() == 0) {
			ans.add(b);
			return;
		}
		for (int i = 0; i < a.length(); i++) {
			char ch = a.charAt(i);
			String ros = a.substring(0, i) + a.substring(i + 1);
			permute(ros, b + ch);
		}
	}

	public static void main(String[] args) {

		try

		{
			FastReader fr = new FastReader();

			int T = fr.nextInt();
			while (T > 0) {

				int n = 0;
				n = Integer.parseInt(fr.nextLine());
				String str = "";
				str = fr.nextLine().trim();
				HashSet<Character> set = new HashSet<Character>();
				for (char s : str.toCharArray()) {
					set.add(s);
				}
				String req = "";
				for (char tg : set)
					req += tg;
				ans = new ArrayList<String>();
				permute(req, "");
				Collections.sort(ans);
				StringBuilder as = new StringBuilder();
				as.append(ans.size() + "\n");
				for (String jn : ans)
					as.append(jn + " ");
				System.out.println(as);

				T--;
			}
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