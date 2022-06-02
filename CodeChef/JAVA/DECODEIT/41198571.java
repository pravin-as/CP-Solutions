/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws Exception
	 {
	     try {
            Scanner sc = new Scanner(System.in);
            int T = sc.nextInt();
            while (T != 0) {
                int N = sc.nextInt();
                String str = sc.next();

                String p = "";
                String s = "";

                for (int i = 0; i < N; i = i + 4) {
                    if ((i + 4) == N)
                        s = str.substring(i);
                    else
                        s = str.substring(i, i + 4);

                    int x = 0;
                    int y = 0;

                    String arr = "abcdefghijklmnop";
                    int z = arr.length();
                    String a = "";
                    for (int j = 0; j < s.length(); j++) {

                        if (s.charAt(j) == '0') {
                            y = (x + z) / 2;
                            a = arr.substring(x, y);
                            z = y;
                        } else {
                            y = (x + z) / 2;
                            if (z == 16)
                                a = arr.substring(y);
                            else
                                a = arr.substring(y, z);
                            x = y;
                        }
                    }
                    p = p + a;
                }
                System.out.println(p);
                T--;
            }
        } catch (Exception e) {
            return;
        }
    }
}