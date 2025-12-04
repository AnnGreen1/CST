package ContronStructure;

import java.util.Scanner;

public class IfCaseStructure {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("请输入成绩：");
        int score = 0;
        score = scanner.nextInt();

        if(score>=60){
            System.out.println("及格");
        }else{
            System.out.println("不及格");
        }

        scanner.close();
    }
}
