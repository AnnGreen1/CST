/**
 * 欧几里得算法（辗转相除法），一个递归算法，目前来说是最高效、科学（根据欧几里得算法定律所实现的算法）的了。
 * @param {*} a 
 * @param {*} b 
 * @returns 
 */
function gcd(a, b) {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}