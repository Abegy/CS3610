// Aaron Begy
// CS 3610 
// 9/6/2020
// Fall Semester
// Project 1

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

bool is_number(char *s){
    return(strspn(s, "-.0123456789") == strlen(s));
}
// this function will be used to check if the argument is a number later on

int main(int argc, char *args[]) {

if (argc != 2) {

cout << "Missing argument" << endl;

return 0;

}
//ends the program if the user doesnt provide an imput
int k;

if(!is_number(args[1])){
cout << "Nan" << endl;
return 0;
}
//returns nan if the argument is not a number

if (k < 2 || k > 30000) {
cout << "Out of range" << endl;
return 0;

}
//returns and error if the input is less than 2 or above 30,000
bool primes[k + 1];

for (int i = 0; i <= k; i++)
primes[i] = true;

for (int j = 2; j * j <= k; j++) {

if (primes[j] == true) {

for (int i = j * j; i <= k; i += j)
primes[i] = false;

}
}
for (int j = 2; j <= k; j++) {

if (primes[j])

cout << j << " ";
}
cout << endl;

for (int j = 2; j <= k; j++) {

if (!primes[j])

cout << j << " ";

}
cout << endl;
return 0;
}