#include <stdio.h>
int main(){
    int n = 5;
    int arr[ n ] = {1, 5, 3, 9, 1};
    for (int i = 1; i < n; i++) {  
        int flag = arr[i];  
        int j = i - 1;  
        while (j >= 0 && arr[j] > flag) {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = flag;  
    }
    for(int  i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    return 0;
}
