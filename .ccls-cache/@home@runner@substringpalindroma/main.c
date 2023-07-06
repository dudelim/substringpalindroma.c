#include <stdio.h>
#include <string.h>

int palindroma(const char *palavra, int inicio, int fim) {
  while (inicio < fim) {
    if (palavra[inicio] != palavra[fim]){
      return 0;
    inicio++;
    end--;
  }
  }
  return 1;
}


int longestPalSubstr(const char *str) {
  // Stores the longest palindrome substring
  char longest[1000] = "";
  int n = strlen(str);
  int maxLength = 1;

  // Traverse all substrings
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // Check if the substring is a palindrome
      if (isPalindrome(str, i, j)) {
        int length = j - i + 1;
        if (length > maxLength) {
          maxLength = length;
          strncpy(longest, str + i, maxLength);
          longest[maxLength] = '\0';
        }
      }
    }
  }

  printf("Output: %s", longest);
}

// Driver Code
int main() {
  const char *str = "babad";
  printf("\n", longestPalSubstr(str));
  return 0;
}