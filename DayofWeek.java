import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

/**
 * Created by ankit on 4/19/17.
 */
public class DayofWeek {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        String date = String.format("%s/%s/%s", month, day, year);
        try {
            SimpleDateFormat dateFormat = new SimpleDateFormat("MM/dd/yyyy");
            Date mydate = dateFormat.parse(date);
            dateFormat.applyPattern("EEEE");
            System.out.println(dateFormat.format(mydate).toUpperCase());
        } catch (ParseException e) {

        }
    }
}
