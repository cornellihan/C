#include <stdio.h>

// Double Ampersand (&&) and double Backslash on CAPS LOCK (||) is called Logical Operator.

int main()
{
    if (4 > 5 && 4 > 3)
    {
        printf("4 is powerful");
    }
    else if (4 > 5 || 4 > 3)
    {
        printf("4 is not so powerfull but still handsome");
    }
    else{
        printf("4 is not a REAL MAN.");
    }
    return 0;
}