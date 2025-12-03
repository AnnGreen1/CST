package base;

public class DataType {
     public static  void main(String[] args){
         // 8 大基本数据类型
         int num = 10;
         byte b = 20;
         short s = 30;
         long l = 300L;
         float f = 34.33f;
         double d = 3.1415926;
         char name = 'n';
         boolean flag =true;


         String str = "Java";



         // 整数拓展： 进制 二进制0b   十进值 八进制0  十六进制0x
         int i = 10;
         int i2 = 010;
         int i3= 0x10;
         System.out.println(i);
         System.out.println(i2);
         System.out.println(i3);

         float f1 = 0.1f;
         double d1 = 1.0/10;
         System.out.println(f1==d1);// false

         float f2 = 333333333333323232323f;
         float f3 = f2+1;
         System.out.println(f2==f3); // true

         // 字符拓展
         char c1 = '中';
         System.out.println(c1);
         System.out.println((int)c1);

         String sa = new String("Hello World");
         String sb = new String("Hello World");
         System.out.println(sa==sb);//false


         String sc = "Hello World";
         String sd = "Hello World";
         System.out.println(sc==sd);//true
     }
}
