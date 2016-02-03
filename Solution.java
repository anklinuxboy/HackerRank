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
        for (int iter = 0; iter < n; ++iter) {
          int mulValue = 0;
          for (int power = 0; power <= iter; ++power) {
            mulValue += (int)Math.pow(2, power)*b;
          }
          int val = a + mulValue;
          System.out.print(val + " ");
        }
      }
    }
}