#include <stdio.h>
#include <math.h>
#define pi 3.141592
void main()
{
	double angle;
	double V0;
	double g = -9.8;
	printf("초기속도는");
	scanf_s("%lf", &V0);
	printf("각도는");
	scanf_s("%lf", &angle);
	//1. x,y방향의 초기속도를 구하여라.
	double rad = angle * pi / 180.0;
	double V0x = V0 * cos(rad);
	double V0y = V0 * sin(rad);
	printf("초기속도 V0x = : %.2f\n", V0x);
	printf("초기속도 V0y = : %.2f\n", V0y);

	//2. 최고점의 높이 구하여라.
	double H = (V0y * V0y) / (2 * -g);
	printf("최고점의 높이 = %.2f\n", H);
	
	//3. 최고점에 도착하는 시간을 구하여라.
	double t = V0y / -g;
	printf("최고점의 도달하는 시간 = %.2f\n", t);

	//4. 수평으로 이동한 최고 거리를 구하여라.
	double s = 2*t * V0x;
	printf("수평으로 이동한 최고 거리 = %.2f\n ",s);

	//5. 지면에 닿을 때의 Vx, Vy를 구하고 V를 벡터 성분을 구하여라.
	double Vy = -V0y;
	double V = sqrt(V0x * V0x + Vy * Vy);
	printf("지면에 닿을 때의 Vx = %.2f\n", V0x);
	printf("지면에 닿을 때의 Vy = %.2f\n", Vy);
	printf("지면에 닿을 때의 V = %.2f\n", V);
	printf("벡터 성분은 (%.2f, %.2f)\n", V0x, Vy);

	return 0;
}
