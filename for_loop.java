import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int testCases = sc.nextInt();
      for (int i = 0; i < testCases; ++i) {
        int a = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();
        int sum = 0;
        for (int power = 0; power < n; ++power) {
          int val = a + (int)Math.pow(b, power);
          sum += val;
          System.out.print(sum + " ");
        }
        System.out.println("\n");
      }
    }
}