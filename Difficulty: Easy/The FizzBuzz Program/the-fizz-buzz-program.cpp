// User function Template for C++

void fizzBuzz(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    } else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    } else {
        cout << number << endl;
    }
}
