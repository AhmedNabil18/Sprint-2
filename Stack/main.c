#include <stdio.h>
#include <stdlib.h>
#include "S_DS_Task.h"


int main()
{

    printf("%s\n",balancedParentheses("{1sdaca(asdasd)aas}"));
    printf("%s\n",balancedParentheses("{1sda(ca(asdasd)a}as}"));
    printf("%s\n",balancedParentheses("{1s}d((aca(asdasd)a){)as}"));
    printf("%s\n",balancedParentheses("{1sd{}a(ca(asdas)d)aas}"));
    return 0;
}
