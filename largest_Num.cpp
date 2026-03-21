// To find the largest available number in the array
// Create a variable called max and initialize it with the value of the first element in the array.
// Use a for loop to iterate through the remaining elements in the array.
// In each iteration, compare the current element with the max variable.
// If the current element is greater than the max value, update the max value with the current element's value.
//After completing the loop, print the max variable, which will hold the smallest value in the array.
#include <iostream>
using namespace std;

int LargestNum(int arr[], int n)
{
	int min =arr[0];
	for(int = 1;i <n;i++)
	{
		if(max < arr[i]){
			max=arr[i];
				}
	}
	return max;
}

int main() {
    // Definint the number array with values 
    int arr1[] = {2, 5, 1, 3, 0};  
    // The length of numerical array
    int n = 5;  
    // Calling the function 
    int max = LargestNum(arr1, n);
    cout << "The Largest element in the array is: " << max << endl;

    return 0;
}