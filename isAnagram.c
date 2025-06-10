#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char s1[100], s2[100];  // Using arrays instead of pointers
    int n1=0, n2=0;
    
    printf("Enter string 1:\n");
    scanf("%s", s1);
    
    // Convert to uppercase and count length
    for(int i=0; s1[i] != '\0'; i++){
        s1[i] = toupper(s1[i]);
        n1++;
    }
    
    printf("Enter string 2:\n");
    scanf("%s", s2);
    
    // Convert to uppercase and count length
    for(int i=0; s2[i] != '\0'; i++){
        s2[i] = toupper(s2[i]);
        n2++;
    }
    
    if(n1 == n2){
        int isAnagram = 1;  // Start assuming it's an anagram
        int used[100] = {0};  // Array to mark used characters
        
        for(int i=0; i<n1; i++){
            int found = 0;
            for(int j=0; j<n1; j++){
                if(s1[i] == s2[j] && !used[j]){
                    used[j] = 1;
                    found = 1;
                    break;
                }
            }
            if(!found){
                isAnagram = 0;
                break;
            }
        }
        
        if(isAnagram){
            printf("The strings are anagram\n");
        }
        else{
            printf("The strings are not anagram\n");
        }
    }
    else{
        printf("The strings are not anagram (different lengths)\n");
    }
    return 0;
}