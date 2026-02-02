/*
Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left
*/



#include <stdio.h>

int delete(int arr[] , int n){

    int z , m = 0 ;
    printf("Enter the Element u want to  delete: ");
    scanf("%d",&z);

    for (int i = 0 ; i < n ; i++){
        if(arr[i] == z){
            m++;
        }
        if(m > 0){
            arr[i] = arr[i+1];
        }
    }

    if( m == 0 ){
        printf("No Element Found");
    }
    else{
        for (int i = 0 ; i < n - 1 ; i++){
        printf("%d ",arr[i]);
    }

    }

}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    delete(arr, n);

    return 0;
}
