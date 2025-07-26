/**
 * @description: 根据一个数组生成其树结构（一个递归）（看到若依的路由生成方案试了一下）
 */
const routes = require('./routes.json')
// console.log(routes);
let data = routes.data

let tree = [];
function gentree(data, parentId) {
    let res = []
    for (let route of data) {
        // console.log(route);
        if (route.parentId === parentId) {
            route.children = gentree(data, route.menuId)
            res.push(route)
        }
    }
    return res
}

let res = gentree(data, 0)
console.log(res);
console.log(JSON.stringify(res));