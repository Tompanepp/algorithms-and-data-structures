/*
    Fixed memory size defined at compile time.
    Properties:
        - Size cannot be increased a runtime
        - Wastage if allocated size is not fully used
        - Potentially incorrect program behaviour or crashes if allocated size is exceeded.
*/


//Example
int main() {
    int numbers[5] = {1,2,3,4,5}; //Fixed memory size of 5 integers
    int a = 5; //Fixed size of one integers
    
    return 0;
}