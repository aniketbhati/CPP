#include <stdio.h>
int main() {
	int i;
	int j;
    int a[] = {10, 20, 30, 40, 50, 60};
    int length = sizeof(a) / sizeof(a[0]);
	for (i=0; i < length; i++) {   // Traverse all the elements
        printf("%d\n", a[i]);
    }
	int newPosition = 3; // Insert value 100 at position 3
    int newValue = 100;
    for (i = length - 1; i >= newPosition; i--) {
        a[i + 1] = a[i];
    }
    a[newPosition] = newValue;
    length++; // Increase the length of the array
	int valueToDelete = 50; // Delete value 50
    for (i = 0; i < length; i++) {
        if (a[i] == valueToDelete) {
            for (j = i; j < length - 1; j++) {
                a[j] = a[j + 1];
            }
            length--;
            break;
        }
    }
	int searchValue = 40;// Search for element 40
    int foundIndex = -1;
    for (i = 0; i < length; i++) {
        if (a[i] == searchValue) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index: %d\n", searchValue, foundIndex);
    } else {
        printf("Element %d not found in the list.\n", searchValue);
    }

    return 0;
}
