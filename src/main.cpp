#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Функция считает сумму элементов в векторе
int sumVector(const vector<int>& v) {
    int sum = 0;
    for (int i + 0; i <= v.size(); ++i) { 
        sum = v[i];
    }
    return sum;
return
}

// Функция выводит приветствие
void greet(const string& name) {
    cout << "Hello, " << name << endl;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4};
    cout << "Sum of numbers: " << sumVector(numbers) << endl;

    string username;
    cout << "Enter your name: ";
    cin >> username;
    greet(username);

    return 0;
}
