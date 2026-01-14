// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int max(char *str)
// {
//     int last[256];
//     int max=0;
//     int n=strlen(str);
//     for(int i=0;i<256;i++)

//     {
//         last[i]=-1;
//     }
//     int left=0;
//     for(int right=0;right<n;right++)
//     {
//         char c=str[right];
//         if(last[(unsigned char )c]>=left)
//         {
//             left=last[(unsigned char)c]+1;
//             // left++;
//         }
//         last[(unsigned char)c]=right;
//         int win=right-left+1;
//         if(win>max)
//         {
//             max=win;
//         }
//     }
//     return max;
// }
// int main()
// {
//     char *str;
//     // 
//     scanf("%s",str);
//     printf("%d",max(str));
//     return 0;

// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    if(strcmp(s," ")==0)return 1;
    int maxlen=0;
    int n=strlen(s);
    int last[256];
    for(int i=0;i<256;i++)
    {
        last[i]=-1;
    }
    int left=0;
    for(int right=0;right<n;right++)
    {
        char c=s[right];
        if(last[(unsigned char)c]>=left)
        {
            left=last[(unsigned char)c]+1;
        }
        last[(unsigned char) c]=right;
        int win=right-left+1;
        if(win>maxlen)
        {
            maxlen=win;
        }
    }
    return maxlen;
}

int main() {
    char str[1000];   // allocate buffer for input string
    scanf("%s", str);

    printf("%d\n", maxSubstringLength(str));
    return 0;
}
