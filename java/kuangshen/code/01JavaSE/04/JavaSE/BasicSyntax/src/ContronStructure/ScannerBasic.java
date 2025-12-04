package ContronStructure;

import java.util.Scanner;
public class ScannerBasic {
    public static void main(String[] args){
        /**
         * 01 用户交互Scanner
         */


        /**
         * 使用 next 方法
         */
        // 创建一个扫描器对象，用于接收键盘数据
        Scanner scanner = new Scanner(System.in);

        System.out.println("使用next方法接收:");

        // 判断用户有没有输入字符串
        if(scanner.hasNext()){
            String str = scanner.next();
            System.out.println("输入的内容为:" + str);
        }

        // 凡是属于IO流的类如果不关闭会一直占用资源
        scanner.close();


//        /**
//         * 使用 nextline 方法
//         */
//        // 从键盘接收数据
//        Scanner scanner2 = new Scanner(System.in);
//
//        System.out.println("使用nextLine方式接收:");
//
//        // 判断是否还有输入
//        if(scanner2.hasNextLine()){
//            String str = scanner2.nextLine();
//            System.out.println("输出的内容为:" + str);
//        }
//
//        scanner2.close();


    }
}
