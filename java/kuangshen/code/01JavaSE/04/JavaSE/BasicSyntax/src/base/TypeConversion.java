package base;

public class TypeConversion {
    public static void main(String[] args){
        /**
         * 精度低 ------------------------------------------> 精度高
         * byte -> short -> char -> int -> long -> float -> double
         */

        // 丢失精度
        double d = 23.58986789;
        int i =(int)d;// 强制类型转换
        System.out.println(d);
        System.out.println(i);// 精度丢失


    }
}
