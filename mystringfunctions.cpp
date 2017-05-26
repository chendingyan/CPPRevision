//Content From Lec 4
#include <cstdio>
#include <cstdlib>

int mystrlen1(char * string){
    int i = 0;
    while(string[i]){
        i++;
    }
    return i;
}

int mystrlen2(char * string){
    char * temp = string;
    while(*temp){
        temp++;
    }
    return temp-string;
}

char * mystrcpy1(char * dest, char * src){
    while(*src){
        *dest++ = *src++;
    }
    return dest;
}

char * mystrcpy2(char * dest, char * src){
    char * p = dest;
    char * q = src;
    while( *p++ = *q++){

    }
    return dest;
}

int mystrcmp(char * str1, char * str2){
    char * p = str1;
    char * q = str2;
    while (*p && *q && *p++ == *q++){

    }
    return *p-*q;
}

char * mystrcat(char * dest, char * src){
    char * p = dest;
    char * q = src;
    while(*p){
        p++;
    }
    while(*p++ = *q++){

    }
    return dest;
}

char * mystrchr(char* src, char seek){
    char * p = src;
    while(*p && *p!= seek){
        p++;
    }
    if(*p){
        char *res = (char*)malloc(sizeof(char)* 100);
        sprintf(res, "Found at %d position", p-src+1);
        return res;
    }
    return "Not Found";
}

char * mystrstr (char* src, char* seek){
    char * p = src;
    char * q = seek;
    while (*p){
        for(*p; *p && *q && *p == *q; p++ && q++){

        }
        if(!*q){
            char *res = (char*)malloc(sizeof(char)* 100);
            sprintf(res, "Found at %d position", p-src+1-mystrlen1(seek));
            return res;
        }
        p++;
    }
    return "Not Found";
}

int main(){
    printf("%d\n", mystrlen1("12345"));
    printf("%d\n", mystrlen2("12345"));
    char src[] = "C++Exam";
    char dest[10];
    mystrcpy1(dest, src);
    printf("%s\n", dest);
    mystrcpy2(dest, src);
    printf("%s\n", dest);
    char * str1 = "C++Exam";
    char * str2 = "C++Exam";
    printf("%d\n", mystrcmp(str1,str2));
    char str3[30] = "This is ";
    printf("%s\n", mystrcat(str3, str2));
    printf("%s\n", mystrchr(str1, 'E'));
    printf("%s\n", mystrstr(str1, str2));
}
