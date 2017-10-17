#include <stdio.h>

struct Matrix
{
	long long m0;
	long long m1;
	long long m2;
	long long m3;
};

Matrix matrixMultiplication(Matrix a, Matrix b) {
	Matrix result;
	result.m0 = a.m0 * b.m0 + a.m1 * b.m2;
	result.m1 = a.m0 * b.m1 + a.m1 * b.m3;
	result.m2 = a.m2 * b.m0 + a.m3 * b.m2;
    result.m3 = a.m2 * b.m1 + a.m3 * b.m3;
    
    // 提前取模以避免数字过大
	result.m0 %= 9973;
	result.m1 %= 9973;
	result.m2 %= 9973;
	result.m3 %= 9973;
	return result;
}

Matrix matrixPower(Matrix x, long long n) {
	Matrix y;
	y.m0 = 1;
	y.m1 = 0;
	y.m2 = 0;
	y.m3 = 1;

    // 相当于将指数化成2的幂的和，如： 19 = 16 + 2 + 1 = 1 * 2^4 + 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 1 * 2^0
    // 本质上就是将十进制的指数化为二进制，从而简化矩阵乘方运算
    // 下面的循环就是我们转换二进制时使用的短除法
	while (n > 1) {
		if (n % 2) {
			y = matrixMultiplication(x, y);
		}
		x = matrixMultiplication(x, x);
		n /= 2;
	}

	return matrixMultiplication(x, y);
}

long long fibonacci(long long n) {
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	if (n == 3) return 2;

    // 矩阵Q来源于斐波那契的递推公式
    // Q = [1 1]
    //     [1 0]
	Matrix Q;
	Q.m0 = 1;
	Q.m1 = 1;
	Q.m2 = 1;
	Q.m3 = 0;

	Q = matrixPower(Q, n - 2);

	return Q.m0 + Q.m1;
}

int main() {
	int n;
	scanf("%d", &n);
	long long *a = new long long[n];
	for (int i = 0; i < n; ++i) {
		scanf("%I64d", &a[i]);
	}

	for (int i = 0; i<n; ++i) {
        // 这里再次取模是必要的，因为取模运算满足 (a + b) % p = (a % p + b % p) % p
        // 而在fibonacci这个函数中我们只对和项取了模，所以最后还得取一次模
		printf("%I64d\n", fibonacci(a[i]) % 9973);
	}

	return 0;
}
