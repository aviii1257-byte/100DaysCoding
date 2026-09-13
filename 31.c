//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, key;
        
            scanf("%d", &n);
                
                    int arr[n];
                        
                            for (int i = 0; i < n; i++) {
                                    scanf("%d", &arr[i]);
                                        }
                                            
                                                scanf("%d", &key);
                                                    
                                                        int low = 0, high = n - 1;
                                                            int found = -1;
                                                                
                                                                    while (low <= high) {
                                                                            int mid = (low + high) / 2;
                                                                                    
                                                                                            if (arr[mid] == key) {
                                                                                                        found = mid;
                                                                                                                    break;
                                                                                                                            }
                                                                                                                                    else if (arr[mid] < key) {
                                                                                                                                                low = mid + 1;
                                                                                                                                                        }
                                                                                                                                                                else {
                                                                                                                                                                            high = mid - 1;
                                                                                                                                                                                    }
                                                                                                                                                                                        }
                                                                                                                                                                                            
                                                                                                                                                                                                if (found != -1)
                                                                                                                                                                                                        printf("Found at index %d", found);
                                                                                                                                                                                                            else
                                                                                                                                                                                                                    printf("-1");
                                                                                                                                                                                                                        
                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                            }
//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, element;

        scanf("%d", &n);

            int arr[n + 1];

                for (int i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                            }

                                scanf("%d", &element);

                                    int pos = 0;

                                        // Find the appropriate position
                                            while (pos < n && arr[pos] < element) {
                                                    pos++;
                                                        }

                                                            // Shift elements to the right
                                                                for (int i = n; i > pos; i--) {
                                                                        arr[i] = arr[i - 1];
                                                                            }

                                                                                // Insert the element
                                                                                    arr[pos] = element;

                                                                                        // Print the array
                                                                                            for (int i = 0; i <= n; i++) {
                                                                                                    printf("%d ", arr[i]);
                                                                                                        }

                                                                                                            return 0;
                                                                                                            }
