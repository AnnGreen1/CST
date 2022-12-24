# 基础类型

### Any

`any`，任意类型，声明为 any 的变量可以赋予任意类型的值。
任意值是 TypeScript 针对编程时类型不明确的变量使用的一种数据类型，它常用于以下三种情况。
1、变量的值会动态改变时，比如来自用户的输入，任意值类型可以让这些变量跳过编译阶段的类型检查，示例代码如下：

```ts
let x: any = 1; // 数字类型
x = "I am who I am"; // 字符串类型
x = false; // 布尔类型
```

2、改写现有代码时，任意值允许在编译时可选择地包含或移除类型检查
```ts
let x: any = 4;
x.ifItExists(); // 正确，ifItExists方法在运行时可能存在，但这里并不会检查
x.toFixed(); // 正确
```
3、定义存储各种类型数据的数组时
```ts
let arrayList: any[] = [1, false, 'fine'];
arrayList[1] = 100;
```
### 数字
`number`，数字类型，双精度 64 位浮点值。它可以用来表示整数和分数，支持二进制、八进制、十进制、十六进制。
```ts
let binaryLiteral: number = 0b1010; // 二进制
let octalLiteral: number = 0o744;    // 八进制
let decLiteral: number = 6;    // 十进制
let hexLiteral: number = 0xf00d;    // 十六进制
```
### 字符串
`string`，字符串类型，一个字符系列，使用单引号`'`或双引号`"`来表示字符串类型。反引号来定义多行文本和内嵌表达式，支持`${ }`字符串插值。
```ts
let name: string = "Runoob";
let years: number = 5;
let words: string = `您好，今年是 ${ name } 发布 ${ years + 1} 周年`;
```
### 布尔值
`boolean`，表示逻辑值：true 和 false。
```ts
let flag: boolean = true;
```
### 数组
```ts
// 在元素类型后面加上[]
let arr: number[] = [1, 2];

// 或者使用数组泛型
let arr: Array<number> = [1, 2];
```

### 元组 Tuple
	
元组类型用来表示已知元素数量和类型的数组，各元素的类型不必相同，对应位置的类型需要相同。
```ts
let x: [string, number];
x = ['Runoob', 1];    // 运行正常
x = [1, 'Runoob'];    // 报错
console.log(x[0]);    // 输出 Runoob
```

### 枚举 enum
枚举类型用于定义数值集合。默认情况下，从0开始为元素编号。 你也可以手动的指定成员的数值。
```ts
enum Color {Red, Green, Blue};
let c: Color = Color.Blue;
console.log(c);    // 输出 2

// 从1开始编号
enum Color {Red = 1, Green, Blue}
let c: Color = Color.Green;

// 全部手动赋值
enum Color {Red = 1, Green = 2, Blue = 4}
let c: Color = Color.Green;
```
枚举类型提供的一个便利是你可以由枚举的值得到它的名字。 例如，我们知道数值为2，但是不确定它映射到Color里的哪个名字，我们可以查找相应的名字：
```ts
enum Color {Red = 1, Green, Blue}
let colorName: string = Color[2];

console.log(colorName);  // 显示'Green'因为上面代码里它的值是2
```
### void
用于标识方法返回值的类型，表示该方法没有返回值。
```ts
function hello(): void {
    alert("Hello Runoob");
}
```
声明一个void类型的变量没有什么大用，因为你只能为它赋予undefined和null：
```ts
let unusable: void = undefined;
```
### null
表示对象值缺失。
### undefined
用于初始化变量为一个未定义的值
### never
never 是其它类型（包括 null 和 undefined）的子类型，代表从不会出现的值。

### Object
object表示非原始类型，也就是除number，string，boolean，symbol，null或undefined之外的类型。