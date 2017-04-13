import java.util.Scanner;

public class JavaLoopsII {

    public static void main(String[] args) {
        JavaLoopsII javaLoops = new JavaLoopsII();
        Scanner sc = new Scanner(System.in);
        int queries = sc.nextInt();

        for (int i = 0; i < queries; ++i) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            javaLoops.printSeries(a, b, n);
        }
    }

    private void printSeries(int a, int b, int n) {
        int i = 0;
        int current = a + b;
        while (i < n) {
            System.out.print(current + " ");
            i++;
            current = current + (int) Math.pow(2, i) * b;
        }
        System.out.println();
    }
}
