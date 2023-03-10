//program to print repeat and print missing number in an array
#include <iostream>
using namespace std;
void printTwoElements(int arr[], int size)
{
	int i;
	cout << "The repeating element is: ";
    for (i = 0; i < size; i++) 
    {
		if (arr[abs(arr[i]) - 1] > 0)
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		else
			cout << abs(arr[i]) << "\n";
	}

	cout << "The missing element is: ";
	for (i = 0; i < size; i++) 
    {
		if (arr[i] > 0)
			cout << (i + 1)<<"\n";
	}
}

/* Driver code */
int main()
{
	int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n]; 
    cout<<"Enter the elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
	printTwoElements(arr, n);
    return 0;
}

