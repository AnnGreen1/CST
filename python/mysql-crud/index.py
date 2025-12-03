import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="",
    database="user"
)

print(mydb)

mycursor = mydb.cursor()
mycursor.execute("SHOW DATABASES")

for x in mycursor:
    print(x)


sql = "insert into users (id, username, password, time) values (%s, %s, %s, %s)"
# val = ('9','test','pwd','2025-10-02')
# mycursor.execute(sql, val)
# mydb.commit()

valList = [
    ('null','zhang','123','2025-10-03'),
    ('null','li','456','2025-10-03')
]
mycursor.executemany(sql,valList)
mydb.commit()

mycursor.execute('select * from users')
userList = mycursor.fetchall()
print(userList)
for u in userList:
    print(u)