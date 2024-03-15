// check if two strings are Anagram
#include <stdio.h>
#include <string.h>
int isAnagram(int array[]){
    for (int i = 0; i < 26; ++i){
        if (array[i] != 0 && array[i] != 2)
            return 0;
    }
    return 1;
}
int main()
{
    char sen1[] = "decimal";
    char sen2[] = "medical";

    int array[26] = {0};
    int size = strlen(sen1);

    for (int i = 0; i < size; ++i){
        array[(int)sen1[i] - (int)'a']++;
        array[(int)sen2[i] - (int)'a']++;
    }
    printf("The result is ");
    printf("%d", isAnagram(array));

}
