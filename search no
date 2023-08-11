#include <stdio.h>
int main() {
	int n,i;
    int registerNumbers[n];
    int listSize = sizeof(registerNumbers) / sizeof(registerNumbers[0]);
    int searchNumber;
    int found = 0;
    int index = -1;
    printf("Enter the size of register no: ");
    scanf("%d", &n);  
	printf("Enter the list of register no: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n", &registerNumbers[i]); 
	}
    printf("\nEnter the search register no: ");
    scanf("%d", &searchNumber);
    for (int i = 0; i < listSize; i++) {
        if (registerNumbers[i] == searchNumber) {
            found = 1;
            index = i;
            break;
        }
    }
    if (found) {
        printf("Register number %d found at index %d\n", searchNumber, index);
    } else {
        printf("Register number %d not found in the list\n", searchNumber);
    }
    return 0;
}

