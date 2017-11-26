#include <stdio.h>

void processPolygon(float(*a)[2], int n) {
	bool flag = true;

    // 判断a[i]与a[i-1]构成的向量和a[i+1]与a[i]构成的向量的叉积的正负
    // 从而判断下一个顶点的延续是与凸多边形一致还是与凹多边形一致
	for (int i = 1; i < n - 1; ++i) {
		float a1[2] = { a[i][0] - a[i - 1][0], a[i][1] - a[i - 1][1] };
		float a2[2] = { a[i + 1][0] - a[i][0], a[i + 1][1] - a[i][1] };
		if (a1[0] * a2[1] - a2[0] * a1[1] > 0) {
			printf("%d\n", i);
			flag = false;
		}
	}

    // 起始点单独检查
	float a1[2] = { a[0][0] - a[n - 1][0], a[0][1] - a[n - 1][1] };
	float a2[2] = { a[1][0] - a[0][0], a[1][1] - a[0][1] };
	if (a1[0] * a2[1] - a2[0] * a1[1] > 0) {
		printf("%d\n", 0);
		flag = false;
	}

    // 终点单独检查
	a1[0] = a[n - 1][0] - a[n - 2][0]; a1[1] = a[n - 1][1] - a[n - 2][1];
	a2[0] = a[0][0] - a[n - 1][0]; a2[1] = a[0][1] - a[n - 1][1];
	if (a1[0] * a2[1] - a2[0] * a1[1] > 0) {
		printf("%d\n", n - 1);
		flag = false;
	}

	if (flag) {
		printf("y\n");
	}
}

int main() {
	int k;
	scanf("%d", &k);

	for (int i = 0; i < k; ++i) {
		int n;
		scanf("%d", &n);

		float(*a)[2] = new float[n][2];
		for (int j = 0; j < n; ++j) {
			scanf("%f %f", &a[j][0], &a[j][1]);
		}
		processPolygon(a, n);
		delete[]a;
	}

	return 0;
}
