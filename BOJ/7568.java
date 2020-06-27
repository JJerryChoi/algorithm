import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Body{
    int weight;
    int height;
    public Body(int w, int h){
        weight = w;
        height = h;
    }
}

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<Body> bodyList = new ArrayList<>(n);
        for(int i = 0; i < n; ++i)
            bodyList.add(new Body(scanner.nextInt(), scanner.nextInt()));

        List<Integer> rank = new ArrayList<>(n);
        for(int i = 0; i < n; ++i){
            rank.add(1);
            for(int j = 0; j < n; ++j){
                if(bodyList.get(j).weight > bodyList.get(i).weight &&
                        bodyList.get(j).height > bodyList.get(i).height)
                    rank.set(i, rank.get(i)+1);
            }
        }
        for(int i = 0; i < n; ++i) {
            System.out.print(rank.get(i));
            System.out.print(' ');
        }
    }
}
