//지능형 기차
//1번부터 4번까지 운행
//사람이 기차에 제일 많을때 그 사람 수 찾기
//입력 내린사람수 / 탄사람수
//출력 가장 많을 때 사람 수

//vector pair로 입력 받고
//4개 동안 결과 vector에 내리고 탄 값 저장(누적)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
vector<int> result;

void input() {
	for (int i = 0; i < 4; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
}

int solution() {
	int answer;
	for (int i = 0; i < 4; i++) {
		int res = 0;
		res = v[i].second - v[i].first;
		result.push_back(res);
	}
	for (int i = 1; i < 4; i++)
	{
		result[i] = result[i] + result[i - 1];
	}
	sort(result.begin(), result.end());
	answer = result.back();
	return answer;
}

int main(void) {
	input();
	cout << solution() << endl;
	return 0;
}