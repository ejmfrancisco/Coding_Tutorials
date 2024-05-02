#include <iostream>

void sort(int array[], int size);

int main(){
    int array[] = {3,4,6,7,8,1,10,9,2,5};
    int size = sizeof(array)/sizeof(int);
    std::cout << "Size of array is " << size << '\n';

    sort(array, size);
    
    for(int num : array){
        std::cout << "Number is: " << num << '\n';
    }

    return 0;
}

void sort(int array[], int size){
    int temp;

    for (int i = 0; i < size -1 ; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
            std::cout << "Iteration " << j <<'\n';

            
        }
    }
}