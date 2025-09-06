//
// SPA 1, Fall 2025, Vincenzo Bean
//

//#include "spa1.h"
#include <iostream>
using namespace std;
int main() {
    string time;
    string item;
    int mills;
    int total = 0;
    while (cin >> time >> item >> mills) {
        if (item == "urine" || item == "bloodloss" || item == "diarrhea") {
            total -= mills;
        } else {
            total += mills;
        }
        if (total >= 1000 && (item != "bloodloss" && item != "diarrhea" && item != "urine")) {
            cout <<"after consuming "<<item<<" at "<<time<<", intake exceeds output by "
            <<total<<" ml"<< endl;
        }
    }
    cout << "the final fluid differential is "<<total<< " ml"<< endl;




}