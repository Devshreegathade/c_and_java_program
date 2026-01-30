#include <stdio.h>
#include <string.h>
int main() 
{
    printf("array in C \n");
    float random[4];
    int odd[6]={1,3,5,7,9};
    char vowels[6]="aeiou";
    char consonants[22]="bcdfghjklmnpqrstvwxyz";
    int vowel_len = strlen(vowels);
    int con_length = strlen(consonants);

    
    printf("vowels are :%s\n",vowels);
    printf("consonants are :%s\n",consonants); 
    
    //comparing two array
    if (strcmp(vowels,consonants)==0)
     {
       printf("strings are equal\n");
     }
    else
     {
       printf("strings are not equal\n");
     }


    //for odd no
    printf("odd no are :");
    for (int i=0;i<5;i++)
     {
       printf("%d\n",odd[i]);
     }
    printf("\n");

    // for array input
    printf("enter random (float) numbers : \n");
    for(int i=0;i<3;i++)
     {
       printf("enter elements :%d\n",i+1);
       scanf("%f",&random[i]);
     }
    printf("entered(float) numbers  are : \n");
    for(int i=0;i<3;i++)
     {
       printf("%f\n",random[i]);     
     }
    printf("\n");
  
    //compare address
    if (vowels == consonants)
     {
       printf("same address\n");
     }
    else
     {
       printf("diff address\n");
     }

     //calculate string length
     if (vowel_len == con_length)
     {
       printf("equal length");
     }
     else
     {
       printf("length not equal\n");
     }
     
    return 0;
}