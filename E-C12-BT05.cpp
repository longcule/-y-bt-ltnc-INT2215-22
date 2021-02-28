#include<iostream>
using namespace std;
int tohop(int k, int n)
{
	if (k == 0 || k == n) return 1;
	if (k == 1) return n;
	return tohop(k - 1, n - 1) + tohop(k, n - 1);
}
int kiemtra(int k, int n)
{
	if ((n >= 1 && n <= 20) && (k >= 0 && k <= n)) return 1;
	return 0;
}
void nhapKN(int* k, int* n, int* sophantu) {
	for (int i = 0;; i++) {
		cin >> k[i] >> n[i];
		if (k[i] == -1 && n[i] == -1) break;
		(*sophantu)++;
	}
}
int main()
{
	int sophantu = 0;
	int k[1000], n[1000];
	nhapKN(k, n, &sophantu);
	for (int i = 0; i < sophantu; i++) {
		if (kiemtra(k[i], n[i]) == 1) {
			cout << tohop(k[i], n[i]) << endl;
		}
	}
}
