#include <bits/stdc++.h>

using namespace std;

int main() {
    int side1, side2, side3, maxSide;
    cin >> side1 >> side2 >> side3;

    
    maxSide = max(side1, side2);
    maxSide = max(maxSide, side3);


    //check if is a triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        cout << "yes";
    } else {
        cout << "no";
    }
    // if (side1 + side2 > side3 || side2 + side3 > side1 || side1 + side3 > side2) {
    //     cout << "yes";
    // } else {
    //     cout << "no";
    // }

    // maxSide = max(side1, side2);
    // maxSide = max(maxSide, side3);

    // if (side1 + side2 < maxSide || side2 + side3 < maxSide || side1 + side3 < maxSide) {
    //     cout << "yes";
    // } else if (side1 + side2 == maxSide || side2 + side3 == maxSide || side1 + side3 == maxSide) {
    //     cout << "yes";
    // } else {
    //     cout << "no";
    // }

    return 0;
}