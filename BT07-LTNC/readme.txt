1.
Cho đoạn lệnh sau.
char c = ‘A', d = ‘B';
char* p1 = &c;
char* p2 = &d;
char* p3;
p3 = &d;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
*p1 = *p2;
cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;
---> output:*p3 =B, p3 = 0x5678
            *p3 =A, p3 = 0x1234
	    *p1 =B, p1 = 0x5678
2.Cho các lệnh sau.
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;
(Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
k = 5;
*k = 5;
p = 5;
*p = 5;
----->*p = 5 sẽ cho i giá trị = 5.
3.Giải thích lỗi sau:
char c = ‘C';
double *p = &c;
-----> khai báo c kiểu char nhưng lại dùng *p trỏ đến c kiểu double.
