#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *ptr;
  ptr=fopen("sample.txt","r");// for reading the file if file not exist it return null
 // ptr=fopen("sample2.txt","w");//for writing the file if file exist the content will be overwrite
 //ptr=fopen("sample.txt","rb");// for reading the file if file not exist it return null
 //ptr=fopen("sample.txt","wb");//for writing the file if file exist the content will be overwrite
 //ptr=fopen("sample.txt","a");// if file does not exist it will be created
  return 0;
}
//r and w are modes
