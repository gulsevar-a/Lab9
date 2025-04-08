// Problem_1
// #include <iostream>
// using namespace std;
// int multiply(int a, int b) {
//     if (b == 0) return 0;
//     if (b > 0) return a + multiply(a, b - 1);
//     return -multiply(a, -b);
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << multiply(a, b);
//     return 0;
// }
//
// Problem_2
// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << factorial(n);
//     return 0;
// }
//
// Problem_3
// #include <iostream>
// using namespace std;
// int fibonacci(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << fibonacci(n);
//     return 0;
// }
//
// Problem_4
// #include <iostream>
// using namespace std;
// int sumNatural(int n) {
//     if (n == 0) return 0;
//     return n + sumNatural(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << sumNatural(n);
//     return 0;
// }
//
// Problem_5
// #include <iostream>
// using namespace std;
// void printDescending(int n) {
//     if (n == 0) return;
//     cout << n << " ";
//     printDescending(n - 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     printDescending(n);
//     return 0;
// }
//
// Problem_6
// #include <iostream>
// using namespace std;
// int countDigits(int n) {
//     if (n == 0) return 0;
//     return 1 + countDigits(n / 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     if (n == 0) cout << 1;
//     else cout << countDigits(n);
//     return 0;
// }
//
// Problem_7
// #include <iostream>
// using namespace std;
// int sumDigits(int n) {
//     if (n == 0) return 0;
//     return (n % 10) + sumDigits(n / 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << sumDigits(n);
//     return 0;
// }
//
// Problem_8
// #include <iostream>
// using namespace std;
// int power(int x, int y) {
//     if (y == 0) return 1;
//     return x * power(x, y - 1);
// }
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << power(x, y);
//     return 0;
// }
//
// Problem_9
// #include <iostream>
// using namespace std;
// int reverseNumber(int n, int rev = 0) {
//     if (n == 0) return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << reverseNumber(n);
//     return 0;
// }
//
// Problem_10
// #include <iostream>
// using namespace std;
// int reverseNumber(int n, int rev = 0) {
//     if (n == 0) return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }
// bool isPalindrome(int n) {
//     return n == reverseNumber(n);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPalindrome(n) ? "true" : "false");
//     return 0;
// }
//
// Problem_11
// #include <iostream>
// using namespace std;
// bool isPrime(int n, int i = 2) {
//     if (n <= 2) return (n == 2);
//     if (n % i == 0) return false;
//     if (i * i > n) return true;
//     return isPrime(n, i + 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPrime(n) ? "true" : "false");
//     return 0;
// }
//
// Problem_12
#include <iostream>
using namespace std;
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}
int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}