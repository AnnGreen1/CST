https://sass-lang.com
https://www.sass.hk/

1、全局安装sass
```
npm install -g sass
```
2、新建`demo.scss`
```scss
nav {
    background : #C39BD3;
    padding : 10px;
    height: 50px;
  
    ul {
        display: flex;
        list-style : none;
        justify-content: flex-end;

        li {
            color: white;
            margin-right: 10px;
        } 
    }
}
```
3、命令编译Sass代码
```
sass demo.scss demo.css
```