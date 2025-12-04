package ContronStructure;

import java.util.Scanner;
public class ScannerAdvanced {
    public static void main(String[] args){
        /**
         * 02 Scanner进阶使用
         */


        Scanner scanner = new Scanner(System.in);

        // 从键盘接收数据
        int i = 0;
        float f= 0.0f;

        System.out.println("请输入整数：");
        if(scanner.hasNextInt()){
            i = scanner.nextInt();
            System.out.println("整数数据："+i);
        }else{
            System.out.println("你输入的不是整数！");
        }

        System.out.println("请输入小数：");
        if(scanner.hasNextFloat()){
            f = scanner.nextFloat();
            System.out.println("小数数据："+f);
        }else{
            System.out.println("你输入的不是小数！");
        }

        scanner.close();

        /**
         * 接收输入的几个数字的和与平均数
         */
        Scanner scanner2 = new Scanner(System.in);

        // 和
        double sum = 0;
        // 计算输入了多少个数字
        int m = 0;
        // 通过循环判断是否还有输入，并在里买呢对每一次进行求和和统计
        while(scanner2.hasNextDouble()){
            double x = scanner2.nextDouble();
            m = m +1;
            sum = sum +x;
            System.out.println("你输入了第" + m + "个数据，当前结果为sum=" + sum);
        }

        System.out.println(m+"个输的和为"+sum);
        System.out.println(m + "个输的平均是"+(sum / m));

        scanner2.close();
    }
}
