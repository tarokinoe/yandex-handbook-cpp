/*
 * Ход ферзя
 * https://new.contest.yandex.ru/contests/42155/problem?id=40119%2F2022_10_30%2Fk3YWR8AJdQ
 */
#include <iostream>
#include <cmath>


using namespace std;


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c or b == d or (abs(a - c)) == abs(b - d)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}