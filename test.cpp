#include <iostream>
using namespace std;

struct Dot {
	int name;
	bool* edge;
};

int main() {
	int N;
	int M;
	int V;

	cin >> N >> M >> V;
	Dot* dot = new Dot[M];

	for (int i = 0; i < M; i++) {
		dot[i].edge = new bool[M];
	}

	int dotIndenx = 0;
	bool existName = false;
	for (int i = 0; i < M; i++) {
		int num1, num2;
		cin >> num1 >> num2;

		// �̹� �̸��� �ԷµǾ����� Ȯ��
		// bool�� ó���������� �Ȱ��� �̸����ִ� �ε����� ó���ϸ�?
		for (int j = 0; j < M; j++) {
			if (dot[j].name == num1) {
				existName = true;
				break;
			}
		}

		// ���� �����̿����� dot�� �߰�
		if (!existName) {
			dot[dotIndenx].name = num1;
			dotIndenx++;			
		}
		existName = false;

		dot[]
	}
}