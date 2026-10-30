#include <stdio.h>
#include <string.h>

int main(){
    char s[1000], t[1000];

    // Read both strings
    scanf("%999s %999s", s, t);

    int len1 = strlen(s);
    int len2 = strlen(t);

    // Anagrams must have equal lengths
    if(len1 != len2){
        printf("Not Anagram\n");
        return 0;
    }

    // Frequency array for the 26 lowercase English letters
    int frequency[26] = {0};

    // Count characters in the first string
    for(int i = 0; i < len1; i++){
        frequency[s[i] - 'a']++;
    }

    // Subtract character counts using the second string
    for(int i = 0; i < len2; i++){
        frequency[t[i] - 'a']--;
    }

    // If all frequencies are zero, the strings are anagrams
    for(int i = 0; i < 26; i++){
        if(frequency[i] != 0){
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}
