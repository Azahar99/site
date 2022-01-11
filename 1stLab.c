#include<stdio.h>
main()
{
    int arr_size;
    int larr[100];
    int i,index;
    //For defining array size
    printf("Enter the size of Linear Array:\n");
    scanf("%d",&arr_size);
    //For taking input data in the array (arr_size = 5)
    printf("Enter data in Linear Array:\n");
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&larr[i]);
    }
    //For Showing the data
    printf("Display the data of Linear Array:\n");
    for(i=0;i<arr_size;i++)
    {
        printf("\nlarr[%d] = %d",i,larr[i]);
    }
    //For updating data
    printf("\nEnter the index to update:\n");
    scanf("%d",&index);
    printf("Enter the new value:\n");
    scanf("%d",&larr[index]);
    //For Showing the data
    printf("Display the data of Linear Array:\n");
    for(i=0;i<arr_size;i++)
    {
        printf("\nlarr[%d] = %d",i,larr[i]);
    }

}
