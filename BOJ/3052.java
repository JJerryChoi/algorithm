import java.util.Scanner;
import java.util.TreeSet;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        TreeSet<Integer> treeSet = new TreeSet<Integer>();
        for(int i = 0; i < 10; ++i){
            treeSet.add(scanner.nextInt() % 42);
        }
        System.out.print(treeSet.size());
    }
}
