#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }

    int lastDigit = num % 10;
    reversed = (reversed * 10) + lastDigit;

    return reverseNum(num / 10, reversed);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversedNumber = reverseNum(n, 0);
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
