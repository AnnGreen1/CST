/**
 * @link https://cloud.tencent.com/developer/article/1676937
 * @description 以下代码只能说是解释了雪花算法，实际并不能使用。
 * @returns 
 */
function generateSnowflakeId() {
    var timestamp = (new Date().getTime()).toString(16); // 获取当前时间戳并转换为16进制字符串
    var randomStr = Math.floor((1 + Math.random()) * 0x10000).toString(16).substring(1); // 生成随机数并转换为16进制字符串
    var snowflakeId = timestamp + randomStr; // 将时间戳和随机数拼接在一起
    return snowflakeId;
}

// 生成一个雪花 ID
var id = generateSnowflakeId();
console.log(id); // 输出生成的雪花 ID