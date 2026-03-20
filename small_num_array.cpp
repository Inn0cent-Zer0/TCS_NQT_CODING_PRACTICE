// To find the smallest available number in the array
// Create a variable called min and initialize it with the value of the first element in the array.
// Use a for loop to iterate through the remaining elements in the array.
// In each iteration, compare the current element with the min variable.
// If the current element is less than the min value, update the min value with the current element's value.
//After completing the loop, print the min variable, which will hold the smallest value in the array.
#include <iostream>
using namespace std;

int SmallestNum(int arr[], int n)
{
	int min =arr[0];
	for(int = 1;i <n;i++)
	{
		if(min > arr[i]){
			min=arr[i];
				}
	}
	return min;
}

int main() {
    // Definint the number array with values 
    int arr1[] = {2, 5, 1, 3, 0};  
    // The length of numerical array
    int n = 5;  
    // Calling the function 
    int min = SmallestNum(arr1, n);
    cout << "The smallest element in the array is: " << min << endl;

    return 0;
}