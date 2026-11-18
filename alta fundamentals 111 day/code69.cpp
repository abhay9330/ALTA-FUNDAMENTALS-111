#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,4,20,3,10,5};
    int n = 6, target = 33;
    int sum = 0, start = 0;
    for(int i = 0; i < n; i++){
  sum += arr[i];
        while(sum > target){
sum -= arr[start];
            start++;
        }
    if(sum == target){
   cout << "Indices " << start << " to " << i;
            break;
        }
    }
    return 0;
}