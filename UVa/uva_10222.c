#include<stdio.h>
int main(){
    char c;
    while(scanf("%c", &c) == 1){
        if(c >= 65 && c <= 90)
            c = c + 32;
        if(c == 'e') printf("q");
        if(c == 'r') printf("w");
        if(c == 't') printf("e");
        if(c == 'y') printf("r");
        if(c == 'u') printf("t");
        if(c == 'i') printf("y");
        if(c == 'o') printf("u");
        if(c == 'p') printf("i");
        if(c == '[') printf("o");
        if(c == ']') printf("p");
        if(c == 'd') printf("a");
        if(c == 'f') printf("s");
        if(c == 'g') printf("d");
        if(c == 'h') printf("f");
        if(c == 'j') printf("g");
        if(c == 'k') printf("h");
        if(c == 'l') printf("j");
        if(c == ';') printf("k");
        if(c == '\'') printf("l");
        if(c == 'c') printf("z");
        if(c == 'v') printf("x");
        if(c == 'b') printf("c");
        if(c == 'n') printf("v");
        if(c == 'm') printf("b");
        if(c == ',') printf("n");
        if(c == '.') printf("m");
        if(c == ' ') printf(" ");
        if(c == '\n') printf("\n");
    }
    return 0;
}
