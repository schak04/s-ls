# String comparison in C

Wrong: `str1 == str2` -> as this compares addresses

Right: `strcmp(str1, str2) == 0` -> compares contents
    if the result == 0 that means the strings are equal
    otherwise if < 0 -> str1 < str2
        and if > 0 -> str1 > str2
