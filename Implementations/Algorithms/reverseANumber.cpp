// function to reverse a number

int rev(int num){
    int temp = 0;
    while(num){
        temp = (temp*10) + (num%10);
        num/=10;
    }
    return temp;
}