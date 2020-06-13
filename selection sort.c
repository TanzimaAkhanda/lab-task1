#include <stdio.h>
int main(){
    int n = 5;
    int arr[ n ] = {1, 5, 3, 9, 1};
    for(int i = 0; i < n - 1; i++){
        int flag = i;
        for(int j = i + 1; j < n; j++)
            if(arr[flag] > arr[j])
                flag = j;
        if(flag != i){
            int temp = arr[i];
            arr[i] = arr[flag];
            arr[flag] = temp;
        }
    }
    for(int  i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    return 0;
}
