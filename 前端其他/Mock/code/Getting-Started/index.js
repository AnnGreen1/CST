// 使用 Mock
var Mock = require('mockjs')
var data = Mock.mock({
    // 属性 list 的值是一个数组，其中含有 1 到 10 个元素
    'list|1-10': [{
        // 属性 id 是一个自增数，起始值为 1，每次增 1
        'id|+1': 1
    }]
})
// 输出结果
console.log(JSON.stringify(data, null, 4))


Mock.mock('http://localhost:3000/api/user', 'get', {
    code: 200,
    data: {
        id: '@id',
        name: '@name',
        age: '@integer(20, 50)',
    },
});

// 启动模拟数据拦截
Mock.setup({
    timeout: '200-600'
});