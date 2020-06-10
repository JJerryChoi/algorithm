public class Main{
    public static void main(String[] args) {
        int[] numbers = new int[10000];
        for(int i = 0; i < numbers.length; ++i)
            numbers[i] = i+1;
        remainSelfNumber(numbers);
        for(int i = 0; i < numbers.length; ++i) {
            if (numbers[i] != 0)
                System.out.println(numbers[i]);
        }
    }

    static void remainSelfNumber(int[] numbers){
        for(int i = 0; i < numbers.length; ++i){
            int generatedNumber = i+1;
            if(generatedNumber == 0)
                continue;
            String number = String.valueOf(generatedNumber);
            for(int j = 0; j < number.length(); ++j)
                generatedNumber += number.charAt(j) - '0';

            if(generatedNumber > 10000)
                continue;

            numbers[generatedNumber-1] = 0;
        }
    }
}
