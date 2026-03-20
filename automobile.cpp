// Problem Statement

//An automobile company manufactures both two-wheelers (TW) and four-wheelers (FW). A company manager wants to decide the //production numbers for both types of vehicles according to the given data:

//1st data: Total number of vehicles (two-wheelers + four-wheelers) = V
//2nd data: Total number of wheels = W
//The task is to find how many two-wheelers and four-wheelers need to be manufactured as per the given data.
//Explanation:

//130 + 70 = 200 vehicles
//(70 × 4) + (130 × 2) = 540 wheels
//Constraints:

//2 ≤ W
//W % 2 = 0
//V < W
//Print "INVALID INPUT" if the inputs do not meet the constraints.
// TCS NQT 2023 - September Day 1 - Slot 1 - Automobile Company
#include <iostream>
using namespace std; 
int main() 
{ 
    int V, W; cin >> V >> W; 
    if (V > 0 && W > 0 && W >= 2 && W % 2 == 0 && V < W) 
    { 
        int FW = (W - 2 * V) / 2; 
        int TW = V - FW; 
        if (FW >= 0 && TW >= 0) 
        { 
            cout << "TW = " << TW << " FW = " << FW; 
            } 
            else 
            { 
                cout << "INVALID INPUT"; 
                // Resulted in negative number of vehicles 
                } 
                } 
                else 
                { cout << "INVALID INPUT"; 
                // Input does not meet constraints 
                } return 0; 
                } 