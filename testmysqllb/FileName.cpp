 #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<mysql.h>

int main()
{
	MYSQL mysql;
	mysql_init(&mysql);//初始化
	const char* host = "127.0.0.1";//地址
	const char* user = "root";//
	const char* pass = "20010410";//密码
	const char* db = "mysql";//数据库名称
	//连接登录数据库
	if (!mysql_real_connect(&mysql, host, user, pass, db, 3306, 0, 0))
	{
		cout << "mysql connect failed!" << mysql_error(&mysql) << endl;
	}
	else {
		cout << "mysql connect" << host << "<<success";
	}
	//cout << "hello world" << endl;
	system("pause");
	return 0;
}