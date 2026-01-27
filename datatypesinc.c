#include <stdio.h>
#include <string.h>
int main() 
{
    printf("datatypes\n");
    int num;
    char character;
    float num_float;
    double num_double;
    char string[7];
    short small_num;
    long long_num;
    unsigned unsigned_num;
    signed signed_num;
    long long long_2;
    long double ld_num;

    printf("enter an integer : ");
    fflush(stdout);
    scanf("%d",&num);
    printf("integer is : %d\n",num);
    printf("size of int is : %zu\n",sizeof(num));


    printf("enter a char : ");
    fflush(stdout);
    scanf(" %c",&character);
    printf("character is : %c\n",character);
    printf("size of char is : %zu\n",sizeof(character));  


    printf("enter floating no : ");
    fflush(stdout);
    scanf("%f",&num_float);
    printf("floating no is : %f\n",num_float);
    printf("size of floating no is : %zu\n",sizeof(num_float));


    printf("enter double : ");
    fflush(stdout);
    scanf(" %lf",&num_double);
    printf("double is : %lf\n",num_double);
    printf("size of double is : %zu\n",sizeof(num_double));


    printf("enter a string : ");
    fflush(stdout);
    scanf(" %s",string);
    printf("string is : %s\n",string);
    printf("size of string is : %zu\n",sizeof(string));

    printf("enter long no : ");
    fflush(stdout);
    scanf(" %ld",&long_num);
    printf("long no is : %ld\n",long_num);
    printf("size of long no is : %zu\n",sizeof(long_num));

    printf("enter a small no : ");
    fflush(stdout);
    scanf(" %hd",&small_num);
    printf("small no is : %hd\n",small_num);
    printf("size of small(short) is : %zu\n",sizeof(small_num));

    printf("enter unsigned int : ");
    fflush(stdout);
    scanf(" %u",&unsigned_num);
    printf("unsigned int is : %u\n",unsigned_num);
    printf("size of unsigned int is : %zu\n",sizeof(unsigned_num));

    printf("enter long long value : ");
    fflush(stdout);
    scanf("%lld",&long_2);
    printf("llong long int is : %lld\n",long_2);
    printf("size of unsigned int is : %zu\n",sizeof(long_2));

    printf("enter long double int : ");
    fflush(stdout);
    scanf(" %Lf",&ld_num);
    printf("long double int is : %Lf\n",ld_num);
    printf("size of long double int is : %zu\n",sizeof(ld_num));

    return 0;
}