#include <stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i,vc=0,cc=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
			  str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vc++;
        else
            cc++;
    }
    printf("Vowel count : %d\nConsonant Count:%d",vc,cc);
    return 0;
}

