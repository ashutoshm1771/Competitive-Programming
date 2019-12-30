import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the stringSimilarity function below.
    static long stringSimilarity(String str) {
        long c=str.length();      
        int L = 0, R = 0,n=str.length();
        char[] st = str.toCharArray();
        int []z=new int[n];
        for (int i = 1; i < n; i++) {
            if (i > R) {
                L = R = i;
                while (R < n && st[R-L] == st[R]) R++;
                z[i] = R-L; R--;
                c+=z[i];
            } else {
                int k = i-L;
                if (z[k] < R-i+1) {
                    z[i] = z[k];
                    c+=z[i];
                }
                else {
                    L = i;
                    while (R < n && st[R-L] == st[R]) R++;
                    z[i] = R-L; 
                    c+=z[i];
                    R--;
                }
            }
        }
        return c;
    } 

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            String s = scanner.nextLine();

            long result = stringSimilarity(s);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
