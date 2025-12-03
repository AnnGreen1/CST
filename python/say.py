def sayHello ():
    print('hello.')

def sayMorning():
    print('morning.')


print(__name__)

if(__name__ == '__main__'):
    print('直接执行此文件')
else:
    print('通过引入执行此文件')