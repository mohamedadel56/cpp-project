#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int numbers[5] = {2,3,4,5,6};
    for(int i=0;i<5;i++){
        cout << "Number: " << numbers[i];
        if(numbers[i]%2==0) cout << " is even" << endl;
        else cout << " is odd" << endl;
    }
    
	this_thread::sleep_for(chrono::hours(1));

    return 0;
}
