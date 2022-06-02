/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			sc.nextLine();

			while (T-- > 0) {

				String str = sc.nextLine();
				
				if(str.equals("PCM")||str.equals("PMC")||str.equals("CPM")||str.equals("CMP")||str.equals("MCP")||str.equals("MPC")) {
					System.out.println("YES");
					
				}else {
					System.out.println("NO");
				}

			}
		} catch (

		Exception e) {
			return;

		}
	}
}