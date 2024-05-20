package ContronStructure;

import java.util.Scanner;
public class ScannerDemo {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String value = scanner.nextLine();
        System.out.println(value);


        String value2 = scanner.next();
        System.out.println(value2);

        // 和
        double sum  = 0;
        int m = 0;
        while(scanner.hasNextDouble()){
            double d = scanner.nextDouble();
            sum +=d;
            m++;
        }
        System.out.println(sum/m);

        scanner.close();
    }
}
