#include <iostream>
using namespace std;



int main() {
    int N, K;
    cin >> N >> K;
    
    cout << "People removed in order: ";
    
    int circle[N];
    for (int i = 0; i < N; ++i) {
        circle[i] = i + 1;
    }

    int currentIndex = 0;
    int remainingPeople = N;

    while (remainingPeople > 1) {

        currentIndex = (currentIndex + K - 1) % remainingPeople;
        cout << circle[currentIndex] << " ";

        // Remove the person by shifting the rest of the array left
        for (int i = currentIndex; i < remainingPeople - 1; ++i) {
            circle[i] = circle[i + 1];
        }

        // Decrease the count of remaining people
        --remainingPeople;
    }

    // Print the last remaining person
    cout << circle[0] << endl;
    
    return 0;
}
