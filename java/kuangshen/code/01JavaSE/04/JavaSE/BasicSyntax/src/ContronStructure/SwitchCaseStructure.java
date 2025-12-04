package ContronStructure;

import java.util.Scanner;

public class SwitchCaseStructure {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        char score = 'C';

       switch(score){
           case 'A':
               System.out.println("等级A");
               break;
           case 'B':
               System.out.println("等级B");
               break;
           default:
               System.out.println("未知等级");
       }

       scanner.close();
    }
}
