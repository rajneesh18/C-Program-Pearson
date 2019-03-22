/**
 * Program 3.1:
 * Our binary search makes two tests inside the loop,
 * when one would suffice (at the price of more tests outside).
 * Write the version with only one test inside the loop and measure the difference in run-time.
*/
#include<stdio.h>
int binsearch(int x, int v[], int n);   // Binary Search Function Declaration

int main(){
    int n, i, x, pos;
    int arr[100];

    printf("Enter Array Size (n>100): \n");
    scanf("%d",&n);
    printf("Enter %d elements in increasing order: \n",n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Given Array: ");
    printf("[ ");
    for(i = 0; i < n-1; i++){
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[i]);
    printf(" ]\n");

    printf("Enter Searching Element: ");
    scanf("%d",&x);

    pos = binsearch(x,arr,n);
    if(pos > 0){
        printf("The element found at position : %d\n",pos);
    }else{
        printf("Not Found\n");
    }
    return 0;
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n){
    int low, mid, high;

    low = 0;
    high = n-1;
    mid = (low + high) / 2;
    while(low < high && x != v[mid]){
        if(x > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
        mid = (low + high)/2;
    }
    if(x == v[mid]) return mid;

    return -1; /* no match */
}


/**
 * Output:
 * Enter Array Size (n>100): 6
 * Enter 6 elements in increasing order: 2 4 6 9 10 15
 * Given Array: [ 2, 4, 6, 9, 10, 15 ]
 * Enter Searching Element: 10
 * The element found at position : 4
 */