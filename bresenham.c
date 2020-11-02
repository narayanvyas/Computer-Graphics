#include<stdio.h>


void bresenhamAlgo(int x1, int x2, int y1, int y2) {
	int x=x1, y=y1;
	int p, dx, dy;
	float m;

	dx = x2-x1;
	dy = y2-y1;

	m = (float) dy / (float) dx;

	if(m<1)
		p = 2*dy - dx;
	else
		p = 2*dx - dy;

	printf("\ndx = %d\ndy = %d\nm = %.2f\n\nX\t\tY\t\tP\n", dx, dy, m);

	while(x<=x2) {
		printf("%d\t\t%d\t\t%d\n", x, y, p);
		
		if(m<1) {
			x++;
			if(p<0)
				p = p + 2*dy;		
			else {
				p = p + 2*dy - 2*dx;
				y++;
			}
		}
		else {
			y++;
			if(p<0)
				p = p + 2*dx;		
			else {
				p = p + 2*dx - 2*dy;
				x++;
			}

		}
	}
}

int main() {

	int x1, x2, y1, y2;

	printf("Enter the Values of initial points i.e. X1 and Y1\n");
	scanf("%d%d", &x1, &y1);

	printf("\nEnter the Values of destination points i.e. X2 and Y2\n");
	scanf("%d%d", &x2, &y2);

	bresenhamAlgo(x1, x2, y1, y2);

	return 0;
}