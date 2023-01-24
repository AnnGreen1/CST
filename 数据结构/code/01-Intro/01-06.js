function Book(title, pages, isbn){
    this.title = title;
    this.pages = pages;
    this.isbn = isbn;
}

var book = new Book('title','pag','isbn');

console.log(book.title) //输出书名
book.title = 'new title' //修改书名
console.log(book.title) //输出新书名