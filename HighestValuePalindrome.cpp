// Author : Ashutosh Mishra

//Hackerrank problem --> Highest Value Palindrome
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k,i,j,min,flag = 0,change = 0; 
    scanf("%d %d",&n,&k);
    char* number = (char *)malloc(10000000 * sizeof(char));
    scanf("%s",number);
    min = k;
    char arr[10000000];
    for(int z= 0; z<n; z++)
    {
        arr[z] = number[z];
    }
    int loop = n/2;
    for(i = 0, j = n-1; i < loop; i++,j--)
    {
        if(arr[i] != arr[j])
        {
            change++;             
        }
    }
    if(k < change)
    {
        flag = 1;
    }
    else if(k >= n)
    {
        for(i = 0; i<n;i++)
        {
            arr[i] = '9';
            k--;
        }        
    }
    else
    {
        for(i = 0, j = n-1; i < loop; i++,j--)
        {
            if(arr[i] == arr[j] && arr[i] != '9' && k-2 >= change)
            {
                arr[i] = arr[j] = '9';
                k = k - 2 ;
            }
            else if(arr[i] != arr[j] && (arr[i] == '9' || arr[j] == '9') && k-1 >= change-1)
            {
                if(arr[i] == '9')
                {   
                    arr[j] = '9';
                    k--;
                    change--;
                } 
                else
                {
                    arr[i] = '9';
                    k--;
                    change--;
                } 
            }
            else if(arr[i] != arr[j] && k-2 >= change-1)
            {
                arr[i] = arr[j] = '9';
                k = k-2;
                change--;
            }
            else if(arr[i] != arr[j] && k-1 >= change-1)
            {
                if(arr[i] > arr[j])
                {
                    arr[j] = arr[i];
                    k--;
                    change--;
                }
                else
                {
                    arr[i] = arr[j];
                    k--;
                    change--;
                }
            }
        }
    }
    if(n%2 != 0 && k > 0)
    {
        arr[n/2] = '9';
        k--;
    }
     for(i = 0, j = n-1; i < loop; i++,j--)
     {
         if(arr[i] == arr[j] && arr[i] != '9' && k > 1)
         {
             arr[i] = arr[j] = '9';
             k = k-2;
         }
     }
    if(flag == 1)
        printf("-1");
        else
        {
        for(int z= 0; z<n; z++)
        {
            printf("%c",arr[z]);
        }
    }
    return 0;
}

