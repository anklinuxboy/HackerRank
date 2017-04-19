import java.util.Scanner;

/**
 * Created by ankit on 4/18/17.
 */
public class EndOfFile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = 1;
        while (sc.hasNextLine()) {
            String s = sc.nextLine();
            System.out.println(i + " " + s);
            i++;
        }
    }
}
