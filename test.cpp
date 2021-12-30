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

		// 이미 이름이 입력되었는지 확인
		// bool로 처리하지말고 똑같은 이름이있는 인덱스로 처리하면?
		for (int j = 0; j < M; j++) {
			if (dot[j].name == num1) {
				existName = true;
				break;
			}
		}

		// 없는 정점이였으면 dot에 추가
		if (!existName) {
			dot[dotIndenx].name = num1;
			dotIndenx++;			
		}
		existName = false;

		dot[]
	}
}