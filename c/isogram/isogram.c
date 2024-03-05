#include "isogram.h"
#include <stddef.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    if (phrase == NULL)
        return false;

    int i = 0;
    while (phrase[i] != '\0')
    {
        if (isalpha(phrase[i]) == 0)
        {
            i++;
            continue;
        }

        int j = i + 1;
        while (phrase[j] != '\0')
        {
            if (tolower(phrase[i]) == tolower(phrase[j]))
                return false;
            j++;
        }

        i++;
    }

    return true;
}