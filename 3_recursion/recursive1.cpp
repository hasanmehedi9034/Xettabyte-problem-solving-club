#include <bits/stdc++.h>
using namespace std;

void print_number(int n) {
    if (n < 1) return;

    print_number(n - 1);

    cout << n << " ";
}

int fib(int n){
    if (n <= 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

void f(int start, int end) {
    if (start > end) return;

    cout << start << " ";

    f(start + 1, end);

    if (start != end) cout << start << " ";    
}

void f2(int start, int end) {
    if (end <= 0) return;

    cout << start << " ";
    
    f2(start + 1, end - 1);

    cout << end << " ";
}

bool solve(string s, int start, int end) {
    // base case
    if (start > end) return true;

    // checking
    bool isOk = s[start] == s[end];

    // sub problem
    return isOk and solve(s, start + 1, end - 1);
}

void reverse_root() {
    long long x;

    // if there is an input, store it
    if (scanf("%lld", &x) != 1) return;

    // repeat/recurse
    reverse_root();

    // print stored integer's square root
    printf("%lf\n", sqrt(x));
}



int main() {
    // print_number(5);
    // f2(1, 5);

    string s = "abbaa";
    bool ans = solve(s, 0, s.length() - 1);
    
    if (ans == true) cout  << "Yes";
    else cout << "No";
}