#include <iostream>
#include <vector>

using namespace std;

int N;
vector<long long> fib{ 1,1,2 };

void case01()
{
    long long temp;

    for (int i = 3; i <= N; i++) {
        temp = 0;
        temp = fib[i - 2] + fib[i - 1];
        fib.push_back(temp % 15746);
    }
}

int main()
{
    cin >> N;

    case01();

    cout << fib[N];

    return 0;
}