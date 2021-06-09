#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> v = {};
    do {
        v.push_back(num % 2);
        num /= 2;
    } while ( num != 0);
    for (int i = 1; i <= v.size(); i++){
        cout << v[v.size() - i];
    }
    return 0;
}