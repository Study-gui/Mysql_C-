 #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<mysql.h>

int main()
{
	MYSQL mysql;
	mysql_init(&mysql);//��ʼ��
	const char* host = "127.0.0.1";//��ַ
	const char* user = "root";//
	const char* pass = "20010410";//����
	const char* db = "mysql";//���ݿ�����
	//���ӵ�¼���ݿ�
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