
#include <locale.h>

#include <stdio.h>

void task1() //����� 1

{
	setlocale(LC_ALL, "RUS");

	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;

	printf("c = %c i=%i f=%.2f d=%.0e", c, i, f, d);
}
void task1n2() //����� 1.2



{
	setlocale(LC_ALL, "RUS");

	char c;

	int i;

	float f;

	double d;

	printf("������� ������,����� �����,� 2 ������� ����� ����� �������(��� ����� ������):\n");

    scanf("%c %i %f %le", &c, &i, &f, &d);
	printf("c = %c i=%i f=%.2f d=%.0le", c, i, f, d);
	
}
void task1a()//����� 1� (�������� ����� � ������� �����)

{
	setlocale(LC_ALL, "RUS");

	double f, drobnoe;

	int celoe;

	printf("������� ������� �����:\n");

	scanf("%lf", &f);

	printf("����� �����: %.0lf\n", f);

	celoe = f;

	drobnoe = f - celoe;

	printf("������� �����: %g", drobnoe);

}
void task1b()//����� 1� (�������� ����������������� � ���������� ��� ���������� �������)
{
	setlocale(LC_ALL, "RUS");
	char c;
	printf("������� ������:\n");
	scanf("%c", &c);
	printf("��������� ������ � ����������������� ������� ���������:%x\n",c);
	printf("��������� ������ � ������������ ������� ���������:%i",c);

}
void task1c()//����� 1� (�������� ���������� �����, �������������� 1/i)
{
	setlocale(LC_ALL, "RUS");
	float i;
	printf("������� �����\n");
	scanf("%f", &i);
	printf("����� ����� 1/i: %.5f", 1 / i);
}
void task2() //����� 2

{

	setlocale(LC_ALL, "RUS");

	int a = 11, b = 3, x;
	float y;
	double z;

	x = (int)a / (int)b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;
	printf("x=%i y=%g z=%le", x, y, z);
}


void task2n6() //����� 2

{

	setlocale(LC_ALL, "RUS");

	int a = 11, b = 3;
	printf("x=%i y=%g z=%le", (int)a / b, (float)a / b, (double)a / b);
}

void main() //����� 3

{

	setlocale(LC_ALL, "RUS");

	int number, one, two, three;

	printf("������� ���������� �����:\n");
	scanf("%d", &number);
	one = number / 100;
	two = (number / 10) - (one * 10);
	three = number - (two * 10) - (one * 100);
	printf("�)������ ����� �����:%d \n�)��������� ����� �����:%d\n�)����� ���� �����:%d\n", one, three, one + two + three);
	printf("*)���������� ����� ����� ������:%d%d%d", three, two, one);

}