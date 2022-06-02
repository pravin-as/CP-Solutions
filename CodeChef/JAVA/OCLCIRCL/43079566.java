import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.stream.IntStream;
import java.math.BigInteger;

 class FairchildTangerine {

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

	public static void main(String[] args) {
		try {

			FastReader s = new FastReader();
			int T = s.nextInt();

			while (T > 0) {

				double r1 = s.nextDouble();
				double r2 = s.nextDouble();

				if (r1 / r2 < 2) {
					System.out.println(1);
				} else if (r1 / r2 == 2) {
					System.out.println(2);
				} else {
					System.out.println((long) (( Math.PI) / ( Math.asin(r2 / (r1 - r2)))));
				}

				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}