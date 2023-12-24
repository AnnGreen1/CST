/**
 * 我理解这个算法也是有问题的
 * @link https://blog.nowcoder.net/n/3ca4139cf9804109916e2f31463832cf
 * @param {其中一个比例} a 
 * @param {另一个比例} b 
 * @param {化简结果的上限值} n 
 * @returns 
 */
function SimplifyProportionWithRange(a, b, n) {
  let ans1 = n, ans2 = 1;//将ans赋值为不超过上限的最大值
  c = d = 1;//初值为1
  while (c <= n && d <= n) {//不能超过上限
    // console.log(a + ' ' + b + ' ' + n + ' ' + c + ' ' + d + ' ' + ans1 + ':' + ans2);
    if (a * d <= b * c) {//如果大于等于（用上面推出的公式）
      if (c * ans2 < d * ans1) {//看是否能更新答案（还是用上面推出的公式）
        ans1 = c;//更新
        ans2 = d;

      }
      d++;//分母加1
    } else {//如果小于
      c++;//分子加1
    }

  }
  return ans1 + ':' + ans2;//输出答案
}

// console.log(SimplifyProportionWithRange(1498, 902, 10)) // out 5:3
// console.log(SimplifyProportionWithRange(1498, 902, 5)) // out 5:3
// console.log(SimplifyProportionWithRange(1498, 902, 4)); // out: 2:1 error，在给出的范围内没有合适的解