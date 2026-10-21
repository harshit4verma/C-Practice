#include <stdio.h>

int main()
{
    int maths, science;
    //Maths
    printf("Enter 1 if passed in Maths, 0 if failed in Maths\n");
    scanf("%d", &maths);
    
    //Science
    printf("Enter 1 if passed in Science, 0 if failed in Science\n");
    scanf("%d", &science);

    //if statement
    if(maths == 1 && science == 1) {
        printf("Congraulations! You passe both subjet Gift Awarded of Rs. 45\n");
    }
    //else if statement
    else if (maths == 1) {
        printf("You have paseed in Maths only Gift Awarded of Rs. 15\n");
    }
    //else if statement
     else if (science == 1) {
        printf("You have paseed in science only Gift Awarded of Rs. 15\n");
    }
    // else statement
    else {
        printf("You have failed in both subject the no gift awarded\n");
    }
    
    return 0;
}