#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <list>

using namespace std;

int main() {


	// �R����̉w����o�������X�g�Ɋi�[
	list<const char*> yamanote = {
		"shinagawa", "osaki", "gotanda", "meguro", "ebisu", "shibuya", "harajuku",
		"yoyogi", "shinjuku", "shin-okubo", "takadanobaba", "mejiro", "ikebukuro",
		"otsuka", "sugamo", "komagome", "tabata", "nippori", "uguisudani",
		"ueno", "okachimachi", "akihabara", "kanda", "tokyo", "yurakucho", "shimbashi",
		"hamamatsucho", "tamachi"
	};


	//�o�������X�g
	cout << "1970�N" << endl;
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << ",";
	}

	cout << endl; // �������ŉ��s

	// �unippori�v�̑O�Ɂunishi-nippori�v��ǉ�
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		if (string(*itr) == "nippori") {
			yamanote.insert(itr, "nishi-nippori");
			break; // 1�񂾂���OK�Ȃ̂Ŕ�����
		}
	}



	//�o�������X�g
	cout << "2019�N" << endl;
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << ",";
	}

	cout << endl; // �������ŉ��s

	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		if (string(*itr) == "tamachi") {
			yamanote.insert(itr, "takanawa-gateway");
			break; // 1�񂾂���OK�Ȃ̂Ŕ�����
		}
	}

	//�o�������X�g
	cout << "�ߘa5�N" << endl;
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << ",";
	}

	cout << endl; // �������ŉ��s

	return 0;
}