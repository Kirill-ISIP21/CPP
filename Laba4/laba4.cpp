#include <iostream>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

using namespace std;

int myStrlen1(char* p)
{
    int i = 0;
    while (*p++)
        i++;
    return i;
}

int myStrlen2(char* p)
{
    char* q = p;
    while (*q++);
    return q - p - 1;
}

int myStrlen3(char p[])
{
    int count = 0;
    while (p[count] != '\0')
    {
        count++;
    }
    return count;
}

char* myStrcpy(char* a, char* b)
{
    int k = 0;
    char* pa = a;
    char* pb = b;
    while (*b++ != '\0')
    {
        *(pa + k) = *(pb + k);
        k++;
    }
    return a;
}

void myStrcat(char* a, char* b)
{
    int k = 0;
    int n = 0;
    char* pa = a;
    char* pb = b;
    while (*a++ != '\0')
    {
        k++;
    }
    while (*b++ != '\0')
    {
        *(pa + k) = *(pb + n);
        k++;
        n++;
    }
}

const char* myStrcmp(char* a, char* b) {
    if (myStrlen1(a) != myStrlen1(b))
        return "[not identical]";
    for (int k = 0; a[k] != '\0'; k++) {
        if (a[k] != b[k])
            return "[not identical]";
    }
    return "[identical]";
}
int main()
{
    char S[] = "Hello ";
    char T[] = "Friend!";
    char U[80] = {};
    char V[] = { "Hello Friend!" };

    
    cout << "\t*****String_Length1*****\n" << "\tstr1 = " << myStrlen1(S) << "; str2 = " << myStrlen1(T) << ";\n" << endl;

    
    cout << "\t*****String_Length2*****\n" << "\tstr1 = " << myStrlen2(S) << "; str2 = " << myStrlen2(T) << ";\n" << endl;

    
    cout << "\t*****String_Length3*****\n" << "\tstr1 = " << myStrlen3(S) << "; str2 = " << myStrlen3(T) << ";\n" << endl;

    
    cout << "\t*****String_Copy*****\n" << "\tstr1 = \"" << U << "\"; str2 = \"" << S << "\";" << endl;
    myStrcpy(U, S);
    cout << "\tCopying str2 to str1 result - str1 = \"" << U << "\";\n" << endl;
    //puts (U);

    cout << "\t*****String_Concat*****\n" << "\tstr1 = \"" << U << "\"; str2 = \"" << T << "\";" << endl;
    myStrcat(U, T);
    cout << "\tConcatenation str1 with str2 result = \"" << U << "\";\n" << endl;

    cout << "\t*****String_Compare*****\n" << "\tstr1 = \"" << S << "\"; str2 = \"" << T << "\";" << endl;
    cout << "\tComparison of str1 with str2 result = \"" << myStrcmp(S, T) << "\";\n" << endl;

    cout << "\t*****String_Compare*****\n" << "\tstr1 = \"" << U << "\"; str2 = \"" << V << "\";" << endl;
    cout << "\tComparison of str1 with str2 result = \"" << myStrcmp(U, V) << "\";\n" << endl;

   
    char* str1 = (char*)malloc(20);
    char* str2 = (char*)malloc(20*sizeof(char));

    
    cout << "\t*****String_Malloc_Copy*****\n" << "\tstr1 = \"" << str1 << "\"; str2 = \"" << S << "\";" << endl;
    cout << "\tCopying str2 to str1 result - str1 = \"" << myStrcpy(str1, S) << "\";\n" << endl;
    cout << "\tstr1 = \"" << str2 << "\"; str2 = \"" << T << "\";" << endl;
    cout << "\tCopying str2 to str1 result - str1 = \"" << myStrcpy(str2, T) << "\";\n" << endl;

   
    cout << "\t*****String_Malloc_Length1*****\n" << "\tstr1 = " << myStrlen1(str1) << "; str2 = " << myStrlen1(str2) << ";\n" << endl;

    
    cout << "\t*****String_Length2*****\n" << "\tstr1 = " << myStrlen2(str1) << "; str2 = " << myStrlen2(str2) << ";\n" << endl;

    
    cout << "\t*****String_Length3*****\n" << "\tstr1 = " << myStrlen3(str1) << "; str2 = " << myStrlen3(str2) << ";\n" << endl;

   
    cout << "\t*****String_Malloc_Concat*****\n" << "\tstr1 = \"" << str1 << "\"; str2 = \"" << str2 << "\";" << endl;
    myStrcat(str1, str2);
    cout << "\tConcatenation str1 with str2 result = \"" << str1 << "\";\n" << endl;

    
    cout << "\t*****String_Malloc_Compare*****\n" << "\tstr1 = \"" << str1 << "\"; str2 = \"" << str2 << "\";" << endl;
    cout << "\tComparison of str1 with str2 result = \"" << myStrcmp(str1, str2) << "\";\n" << endl;

    cout << "\t*****String_Malloc_Compare*****\n" << "\tstr1 = \"" << str1 << "\"; str2 = \"" << V << "\";" << endl;
    cout << "\tComparison of str1 with str2 result = \"" << myStrcmp(str1, V) << "\";\n" << endl;

    free(str1);
    free(str2);

   
    char* strC1 = (char*)calloc(100, sizeof(char));
    char* strC2 = (char*)calloc(100, sizeof(char));

    
    cout << "\t*****String_Malloc_Copy*****\n" << "\tstr1 = \"" << strC1 << "\"; str2 = \"" << S << "\";" << endl;
    cout << "\tCopying str2 to str1 result - str1 = \"" << myStrcpy(strC1, S) << "\";\n" << endl;
    cout << "\tstr1 = \"" << strC2 << "\"; str2 = \"" << T << "\";" << endl;
    cout << "\tCopying str2 to str1 result - str1 = \"" << myStrcpy(strC2, T) << "\";\n" << endl;

    
    cout << "\t*****String_Malloc_Length1*****\n" << "\tstr1 = " << myStrlen1(strC1) << "; str2 = " << myStrlen1(strC2) << ";\n" << endl;

    
    cout << "\t*****String_Length2*****\n" << "\tstr1 = " << myStrlen2(strC1) << "; str2 = " << myStrlen2(strC2) << ";\n" << endl;

   
    cout << "\t*****String_Length3*****\n" << "\tstr1 = " << myStrlen3(strC1) << "; str2 = " << myStrlen3(strC2) << ";\n" << endl;

   
    cout << "\t*****String_Malloc_Concat*****\n" << "\tstr1 = \"" << strC1 << "\"; str2 = \"" << strC2 << "\";" << endl;
    myStrcat(strC1, strC2);
    cout << "\tConcatenation str1 with str2 result = \"" << strC1 << "\";\n" << endl;

 
    cout << "\t*****String_Malloc_Compare*****\n" << "\tstr1 = \"" << strC1 << "\"; str2 = \"" << strC2 << "\";" << endl;
    cout << "\tComparison of str1 with str2 result = \"" << myStrcmp(strC1, strC2) << "\";\n" << endl;

    cout << "\t*****String_Malloc_Compare*****\n" << "\tstr1 = \"" << strC1 << "\"; str2 = \"" << V << "\";" << endl;
    cout << "\tComparison of str1 with str2 result = \"" << myStrcmp(strC1, V) << "\";\n" << endl;

    free(strC1);
    free(strC2);



    return 0;

}