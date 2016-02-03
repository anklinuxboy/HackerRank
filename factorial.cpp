#include<iostream>
#include<cstring>

int max = 5000;

void display(int arr[]){
    int ctr = 0;
    for (int i=0; i<max; i++){
      if (!ctr && arr[i])     ctr = 1;
      if(ctr)
            std::cout<<arr[i];
    }
}


void factorial(int arr[], int n){
    if (!n) return;
    int carry = 0;
    for (int i=max-1; i>=0; --i){
        arr[i] = (arr[i] * n) + carry;
        carry = arr[i]/10;
        arr[i] %= 10;
        std::cout << "i: " << i << " arr[i]: " << arr[i] << " n: " << n << " carry: " << carry << std::endl;
    }
    factorial(arr,n-1);
}

int main(){
    int *arr = new int[max];
    std::memset(arr,0,max*sizeof(int));
    arr[max-1] = 1;
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    std::cout<<"factorial of "<< num <<" is :\n";
    factorial(arr,num);
    display(arr);
    delete[] arr;
    std::cout << std::endl;
    return 0;
}