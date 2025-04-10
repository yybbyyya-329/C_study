#include <stdio.h>
#include <math.h>
#define pi 3.141592
void main()
{
	double angle;
	double V0;
	double g = -9.8;
	printf("�ʱ�ӵ���");
	scanf_s("%lf", &V0);
	printf("������");
	scanf_s("%lf", &angle);
	//1. x,y������ �ʱ�ӵ��� ���Ͽ���.
	double rad = angle * pi / 180.0;
	double V0x = V0 * cos(rad);
	double V0y = V0 * sin(rad);
	printf("�ʱ�ӵ� V0x = : %.2f\n", V0x);
	printf("�ʱ�ӵ� V0y = : %.2f\n", V0y);

	//2. �ְ����� ���� ���Ͽ���.
	double H = (V0y * V0y) / (2 * -g);
	printf("�ְ����� ���� = %.2f\n", H);
	
	//3. �ְ����� �����ϴ� �ð��� ���Ͽ���.
	double t = V0y / -g;
	printf("�ְ����� �����ϴ� �ð� = %.2f\n", t);

	//4. �������� �̵��� �ְ� �Ÿ��� ���Ͽ���.
	double s = 2*t * V0x;
	printf("�������� �̵��� �ְ� �Ÿ� = %.2f\n ",s);

	//5. ���鿡 ���� ���� Vx, Vy�� ���ϰ� V�� ���� ������ ���Ͽ���.
	double Vy = -V0y;
	double V = sqrt(V0x * V0x + Vy * Vy);
	printf("���鿡 ���� ���� Vx = %.2f\n", V0x);
	printf("���鿡 ���� ���� Vy = %.2f\n", Vy);
	printf("���鿡 ���� ���� V = %.2f\n", V);
	printf("���� ������ (%.2f, %.2f)\n", V0x, Vy);

	return 0;
}
