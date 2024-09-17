
#include <locale.h>

#include <stdio.h>

void task1() //номер 1

{
	setlocale(LC_ALL, "RUS");

	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;

	printf("c = %c i=%i f=%.2f d=%.0e", c, i, f, d);
}
void task1n2() //номер 1.2



{
	setlocale(LC_ALL, "RUS");

	char c;

	int i;

	float f;

	double d;

	printf("Введите символ,целое число,и 2 дробных числа через запятую(все через пробел):\n");

    scanf("%c %i %f %le", &c, &i, &f, &d);
	printf("c = %c i=%i f=%.2f d=%.0le", c, i, f, d);
	
}
void task1a()//номер 1а (отдельно целую и дробную часть)

{
	setlocale(LC_ALL, "RUS");

	double f, drobnoe;

	int celoe;

	printf("Введите дробное число:\n");

	scanf("%lf", &f);

	printf("Целая часть: %.0lf\n", f);

	celoe = f;

	drobnoe = f - celoe;

	printf("Дробная часть: %g", drobnoe);

}
void task1b()//номер 1б (Выведите шестнадцатеричный и десятичный код введенного символа)
{
	setlocale(LC_ALL, "RUS");
	char c;
	printf("Введите символ:\n");
	scanf("%c", &c);
	printf("Введенный символ в шестнадцатеричной системе счисления:%x\n",c);
	printf("Введенный символ в десятеричной системе счисления:%i",c);

}
void task1c()//номер 1в (Выведите десятичное число, соотвествующее 1/i)
{
	setlocale(LC_ALL, "RUS");
	float i;
	printf("Введите число\n");
	scanf("%f", &i);
	printf("Число ввиде 1/i: %.5f", 1 / i);
}
void task2() //номер 2

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


void task2n6() //номер 2

{

	setlocale(LC_ALL, "RUS");

	int a = 11, b = 3;
	printf("x=%i y=%g z=%le", (int)a / b, (float)a / b, (double)a / b);
}

void main() //номер 3

{

	setlocale(LC_ALL, "RUS");

	int number, one, two, three;

	printf("Введите трёхзначное число:\n");
	scanf("%d", &number);
	one = number / 100;
	two = (number / 10) - (one * 10);
	three = number - (two * 10) - (one * 100);
	printf("а)Первая цифра числа:%d \nб)Последняя цифра числа:%d\nв)Сумма цифр числа:%d\n", one, three, one + two + three);
	printf("*)Написанное число задом наперёд:%d%d%d", three, two, one);

}