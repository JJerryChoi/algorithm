import java.util.Scanner;

class Time{
    int hour, minute;

    public Time(int hour, int minute){
        this.hour = hour;
        this.minute = minute;
    }

    public void setAlaram(){
        if(minute >= 45){
            minute -= 45;
        }
        else if(hour == 0){ // minute < 45
            minute += 15;
            hour = 23;
        }
        else{
            hour -= 1;
            minute += 15;
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int hour = scanner.nextInt();
        int minute = scanner.nextInt();
        Time time = new Time(hour, minute);
        time.setAlaram();
        System.out.println(time.hour);
        System.out.print(time.minute);
    }
}
