#include <stdio.h>
int main() 
{
    int arr[10],i,Search,count = 0;
    printf("Enter elements in array: ");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &Search);
    for(i = 0; i < 10; i++) 
    {
        if(arr[i] == Search) 
        {
            count++;
        }
    }
    printf("The element %d occurs %d times in the array.\n", Search, count);
    return 0;
}