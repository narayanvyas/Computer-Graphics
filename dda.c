#include<stdio.h>
#include<math.h>

void ddaAlgo(int x1, int x2, int y1, int y2) {
	float x, y, dx, dy, xinc, yinc;
	int steps;

	x=x1;
	y=y1;

	dx = x2-x1;
	dy = y2-y1;

	if(abs(dx) > abs(dy))
		steps = abs(dx);
	else
		steps = abs(dy);

	xinc = dx/steps;
	yinc = dy/steps;

	printf("\n\n\nX Increment - %.1f\nY Increment - %.1f\nSteps - %d\n", xinc, yinc, steps);

	printf("\n\nX\t\tY\t\t\tX(ABS)\t\tY(ABS)\n");

	for(int i=0; i<=steps; i++) {
		printf("%.1f\t\t%.1f\t\t\t%0.f\t\t%0.f\n", x, y, x, y);
		x += xinc;
		y += yinc;
	}
}

int main() {
	int x1, x2, y1, y2;

	printf("Enter the Values of initial points i.e. X1 and Y1\n");
	scanf("%d%d", &x1, &y1);

	printf("\nEnter the Values of destination points i.e. X2 and Y2\n");
	scanf("%d%d", &x2, &y2);

	ddaAlgo(x1, x2, y1, y2);

	return 0;
}