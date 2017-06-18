#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

const int N = 10;

void replaceSpace(char *str,int length) {
	char *temp;
    int j = 0;
    for(int i = 0; i < length; i++){
        if(str[i] == ' '){
            temp[j++] = '%';
            temp[j++] = '2';
            temp[j++] = '0';
        }
        else {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    str = temp;
}

int main()
{
	char *s = "abc de fgh";
	int len = strlen(s);
	replaceSpace(s, len);
	len = strlen(s);
	for(int i = 0; i < len; i++){
		cout << s[i] << endl;
	}
	system("pause");
	return 0;
}