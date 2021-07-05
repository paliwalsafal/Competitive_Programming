#include <iostream>
using namespace std;

int main() {
int n;
	scanf("%d", &n);

	int result = n;
	int i = 2;
	int j = 2;


	while (i * i <= n) {
		while (i * j <= n) {
			++result;
			++j;
		}
		++i;
		j = i;
	}

	printf("%d", result);
	return 0;
}