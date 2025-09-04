// #include<stdio.h>

// int main(){
//     int arr[]={5,3,10,15,4,11};
//     int size=6;
//     int flg=0;
//     int key;

//     printf("Enter a number");
//     scanf("%d",&key);

//     for(int i=0;i<size;i++)
//     {
//     if(arr[i]==key)
//     {
//         flg=1;
//     }
// }
// if(flg==1)
// {
//     printf("Found");
// }
// else
// {
// printf("Not Found");
// }
// }

#include<stdio.h>

int main(){
    int arr[]={20,10,40,30,60,50};
    int size=6;
    int flg=0;
    int key =0;

    printf("Enter a Number");
    scanf("%d",&key);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++)
        {
            if(key == arr[i]){
                flg = 1;
            }
        }
    }
    if(flg==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }

}