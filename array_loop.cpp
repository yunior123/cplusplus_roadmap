#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[5] = {
        "Volvo", "BMW", "Ford", "Mazda", "Tesla"
    };
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }

    cout << "Hello World!";
    cout << max(5, 10);
    cout << min(5, 10);

    if (20 > 18) {
        cout << "20 is greater than 18";
    }

    int time = 22;

    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20){
        cout << "Good day";
    } else {
        cout << "Good evening.";
    }

    int day = 4;
    switch (day){
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
    case 6:
        cout << "Saturday";
    case 7:
        cout << "Sunday";
        break;
    }

    return 0;
}