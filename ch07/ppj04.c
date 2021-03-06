/*
 * p157 programming project 04
 * phone number alphabetic to numeric
 */

 #include <stdio.h>

 int main(void)
 {
    char ch;

    printf("Enter phone number: ");
    
    while (ch != '\n') {    // loop : removing char one by one until reaching '\n'
        ch = getchar();
        
        /* compare letters on the keys */
        switch (ch) {
            case 'A':  case 'B':  case 'C':  printf("2");  break;
            case 'D':  case 'E':  case 'F':  printf("3");  break;
            case 'G':  case 'H':  case 'I':  printf("4");  break;
            case 'J':  case 'K':  case 'L':  printf("5");  break;
            case 'M':  case 'N':  case 'O':  printf("6");  break;
            case 'P':  case 'R':  case 'S':  printf("7");  break;
            case 'T':  case 'U':  case 'V':  printf("8");  break;
            case 'W':  case 'X':  case 'Y':  printf("9");  break;
            default :  putchar(ch);  break;
        }
    }
    return 0;
 }
