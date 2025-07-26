/**
 * 该算法是有问题的
 * @param {其中一个比例} a 
 * @param {另一个比例} b 
 */
function SimplifyProportion(a, b) {
    let c = 1;
    let d = 1;
    let flag = false;
    while (c * d <= a * b && c < a > b ? b : a) {
        // console.log(a + ' ' + b + ' ' + c + ' ' + d);
        // debugger
        if ((a / b) < (c / d)) {
            d++
            // console.log('d++');
            continue
        }
        if ((a / b) > (c / d)) {
            c++
            // console.log('c++');
            continue
        }
        if (a * d === b * c) {
            flag = true;
            console.log(new Date().getTime());
            console.log(c + ' ' + d);
            break
        }
    }
    if (!flag) console.log('已是最简比例');
}
console.log(new Date().getTime());
SimplifyProportion(1498, 902)