#include <stdio.h>
int main() {
int arr[] = {10, 20, 30};
int n = 3;
int is_sorted = 1;

for (int i=0; i<n-1; i++) {

if (arr[i] > arr[i + 1]) {
is_sorted = 0;

break;

}
if (is_sorted == 1) {
printf("true\n");
} 
else
 {
printf("false\n");

}

return 0;

}}