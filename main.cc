#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *args[]) {

if (argc != 2) {

cout << "Misssing argument" << endl;

return -1;

}

int n;

try {

n = stoi(args[1]);

} catch (std::invalid_argument e) {

cout << "Nan" << endl;

return -1;

}

if (n < 2 || n > 30000) {

cout << "Out of range." << endl;

return -1;

}

bool prime[n + 1];

for (int i = 0; i <= n; i++)

prime[i] = true;

for (int p = 2; p * p <= n; p++) {

if (prime[p] == true) {

for (int i = p * p; i <= n; i += p)

prime[i] = false;

}

}

for (int p = 2; p <= n; p++) {

if (prime[p])

cout << p << " ";

}

cout << endl;

for (int p = 2; p <= n; p++) {

if (!prime[p])

cout << p << " ";

}

cout << endl;

return 0;

}